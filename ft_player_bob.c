#include "./includes/so_long.h"

void	ft_player_bob3(t_data *data, int img_width, int img_height)
{
	char	*rp5;
	char	*rp6;

	rp5 = "./assets/Idle_5.xpm";
	rp6 = "./assets/Idle_6.xpm";
	if (data->frame > 80 )
	{
		if (data->frame < 100)
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->img_tile.img, data->c_x * 32, data->c_y * 32);
			data->img_char.img = mlx_xpm_file_to_image(data->mlx, rp5,
					&img_width, &img_height);
		}
		else if (data->frame < 120)
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->img_tile.img, data->c_x * 32, data->c_y * 32);
			data->img_char.img = mlx_xpm_file_to_image(data->mlx, rp6,
					&img_width, &img_height);
			data->frame = 0;
		}
	}
}

void	ft_player_bob2(t_data *data, int img_width, int img_height)
{
	char	*rp3;
	char	*rp4;

	rp3 = "./assets/Idle_3.xpm";
	rp4 = "./assets/Idle_4.xpm";
	if (data->frame > 40 && data->frame < 80)
	{
		if (data->frame < 60)
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->img_tile.img, data->c_x * 32, data->c_y * 32);
			data->img_char.img = mlx_xpm_file_to_image(data->mlx, rp3,
					&img_width, &img_height);
		}
		else if (data->frame < 80)
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->img_tile.img, data->c_x * 32, data->c_y * 32);
			data->img_char.img = mlx_xpm_file_to_image(data->mlx, rp4,
					&img_width, &img_height);
		}
	}
}

void	ft_player_bob(t_data *data, int img_width, int img_height)
{
	char	*rp;
	char	*rp2;

	rp = "./assets/Idle_1.xpm";
	rp2 = "./assets/Idle_2.xpm";
	if (data->frame < 20)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img_tile.img, data->c_x * 32, data->c_y * 32);
		data->img_char.img = mlx_xpm_file_to_image(data->mlx,
				rp, &img_width, &img_height);
	}
	else if (data->frame < 40)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img_tile.img, data->c_x * 32, data->c_y * 32);
		data->img_char.img = mlx_xpm_file_to_image(data->mlx,
				rp2, &img_width, &img_height);
	}
	else if (data->frame < 80)
		ft_player_bob2(data, img_width, img_height);
	else if (data->frame < 120)
		ft_player_bob3(data, img_width, img_height);
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->img_char.img, data->c_x * 32, data->c_y * 32);
}
