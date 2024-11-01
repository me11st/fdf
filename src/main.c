/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:54:25 by mestefan          #+#    #+#             */
/*   Updated: 2024/10/23 21:54:44 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/libft.h"

static void	init_data(t_data *data)
{
	data->map = NULL;
	data->colors = NULL;
	data->map_width = 0;
	data->map_height = 0;
	data->x_prj = NULL;
	data->y_prj = NULL;
	data->x_prj_max = FLT_MIN;
	data->y_prj_max = FLT_MIN;
	data->x_prj_min = FLT_MAX;
	data->y_prj_min = FLT_MAX;
	data->offset_x = 0;
	data->offset_y = 0;
	data->scale = 1;
	data->rot_angle_x = 30.0;
	data->rot_angle_y = 45.0;
	data->rot_angle_z = 0;
}

static void	check_file(int ac, char **av)
{
	int		fd;
	char	*ext;

	if (ac != 2)
		error_msg("usage: ./fdf <filename>\n", NULL);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		error_msg("error: open() failed\n", NULL);
	close(fd);
	ext = ft_strrchr(av[1], '.');
	if (!ext || ft_strncmp(ext, ".fdf", 4))
		error_msg("error: invalid file extension\n", NULL);
}

void	init_mlx(t_data *data)
{
	data->mlx_ptr = mlx_init();
	if (!data->mlx_ptr)
		error_msg("error: mlx_init() failed\n", data);
	data->win_ptr = mlx_new_window(data->mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "fdf");
	if (!data->win_ptr)
		error_msg("error: mlx_new_window() failed\n", data);
	data->img.img_ptr = mlx_new_image(data->mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	if (!data->img.img_ptr)
		error_msg("error: mlx_new_image() failed\n", data);
	data->img.data = mlx_get_data_addr(data->img.img_ptr, &data->img.bpp, 
			&data->img.size_line, &data->img.endian);
	if (!data->img.data)
		error_msg("error: mlx_get_data_addr() failed\n", data);
}

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	check_file(ac, av);
	init_mlx(&data);
	get_map_dim(&data, av[1]);
	allocate_color_z(&data);
	parse_fdf_file(&data, av[1]);
	allocate_coords(&data);
	copy_coords(&data);
	render(&data, &data.img);
	mlx_key_hook(data.win_ptr, key_hook, &data);
	mlx_hook(data.win_ptr, 17, 0, handle_x, &data);
	mlx_loop(data.mlx_ptr);
	free_data(&data);
	exit(EXIT_SUCCESS);
	return (0);
}
