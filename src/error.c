/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:55:23 by mestefan          #+#    #+#             */
/*   Updated: 2024/10/23 21:55:27 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"

void	error_msg(char *msg, t_data *data)
{
	ft_putstr_fd(msg, 2);
	free(data->img.data);
	free(data->img.img_ptr);
	free(data->mlx_ptr);
	exit (EXIT_FAILURE);
}

void	free_mlx(t_data *data)
{
	if (data->mlx_ptr)
	{
		if (data->win_ptr)
			mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		if (data->img.img_ptr)
			mlx_destroy_image(data->mlx_ptr, data->img.img_ptr);
		mlx_destroy_display(data->mlx_ptr);
		free(data->mlx_ptr);
		data->win_ptr = NULL;
		data->img.img_ptr = NULL;
		data->mlx_ptr = NULL;
	}
}

void	free_z(t_data *data)
{
	int	i;

	i = 0;
	if (data->coords)
	{
		free(data->coords);
		data->coords = NULL;
	}
	if (data->map)
	{
		while (i < data->map_height)
		{
			free(data->map[i]);
			i++;
		}
		free(data->map);
		data->map = NULL;
	}
}

void	free_color(t_data *data)
{
	int	i;

	i = 0;
	if (data->colors)
	{
		while (i < data->map_height) 
		{
			free(data->colors[i]);
			i++;
		}
		free(data->colors);
		data->colors = NULL;
	}
}

void	free_data(t_data *data)
{
	free_z(data);
	free_color(data);
	free_mlx(data);
}
