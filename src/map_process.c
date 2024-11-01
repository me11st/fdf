/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:55:44 by mestefan          #+#    #+#             */
/*   Updated: 2024/10/23 21:55:48 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"

static int	is_line_empty(char *line)
{
	while (*line)
	{
		if (!isspace(*line))
			return (0);
		line++;
	}
	return (1);
}

static int	process_line(const char *line)
{
	int			temp_width;
	int			in_token;
	const char	*ptr;

	temp_width = 0;
	in_token = 0;
	ptr = line;
	while (*ptr)
	{
		if (!isspace (*ptr))
		{
			if (!in_token)
			{
				temp_width++;
				in_token = 1;
			}
		}
		else
			in_token = 0;
		ptr++;
	}
	return (temp_width);
}

static void	calc_map_dim(t_data *data, int fd)

{
	int		temp_width;
	char	*line;

	line = get_next_line(fd);
	while (line != NULL)
	{
		if (is_line_empty(line))
		{
			free(line);
			line = get_next_line(fd);
			continue ;
		}
		temp_width = process_line(line);
		if (data->map_width < temp_width)
			data->map_width = temp_width;
		data->map_height++;
		free(line);
		line = get_next_line(fd);
	}
}

void	get_map_dim(t_data *data, const char *filename)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error_msg("error: open() failed\n", data);
	calc_map_dim(data, fd);
	if (data->map_height == 0 || data->map_width == 0)
		error_msg("error: invalid map\n", data);
	close(fd);
}
