/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:54:57 by mestefan          #+#    #+#             */
/*   Updated: 2024/10/23 21:55:01 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"

int	**allocate_memory(int width, int height)
{
	int	**map;
	int	i;

	map = (int **)malloc(sizeof(int *) * height);
	if (!map)
		error_msg("error: malloc() failed\n", NULL);
	i = 0;
	while (i < height)
	{
		map[i] = (int *)malloc(sizeof(int) * width);
		if (!map[i])
			return (NULL);
		i++;
	}
	return (map);
}

void	allocate_color_z(t_data *data)
{
	data->map = allocate_memory(data->map_width, data->map_height);
	data->colors = allocate_memory(data->map_width, data->map_height);
}

void	allocate_coords(t_data *data)
{
	int	i;
	int	x;
	int	y;

	data->coords = (t_coords *)malloc(sizeof(t_coords) 
			* data->map_width * data->map_height);
	if (!data->coords)
		error_msg("error: malloc() failed\n", NULL);
	i = 0;
	y = 0;
	while (y < data->map_height)
	{
		x = 0;
		while (x < data->map_width)
		{
			data->coords[i].x = x;
			data->coords[i].y = y;
			data->coords[i].z = data->map[y][x];
			data->coords[i].color = data->colors[y][x];
			x++;
			i++;
		}
		y++;
	}
}

void	copy_coords(t_data *data)
{
	int	i;
	int	x;
	int	y;

	data->init_coords = (t_coords *)malloc(sizeof(t_coords) 
			* data->map_width * data->map_height);
	if (!data->init_coords)
		error_msg("error: malloc() failed\n", data);
	i = 0;
	y = 0;
	while (y < data->map_height)
	{
		x = 0;
		while (x < data->map_width)
		{
			data->init_coords[i].x = x;
			data->init_coords[i].y = y;
			data->init_coords[i].z = data->map[y][x];
			data->init_coords[i].color = data->colors[y][x];
			x++;
			i++;
		}
		y++;
	}
}
