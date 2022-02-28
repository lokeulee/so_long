#include "./includes/so_long.h"

void	if_bang_enemy(int key, t_data *data)
{
	int	i;
	int	j;

	i = data->c_x;
	j = data->c_y;
	if (key == 1 && ((data->map[j + 1][i] == '<') || (data->map[j + 1][i]
		== '^') || (data->map[j + 1][i] == '>')
		|| (data->map[j + 1][i] == 'V')))
	{
		data->map[j + 1][i] = 'P';
		data->bang = 1;
		data->map[j][i] = '0';
	}
	if (key == 2 && ((data->map[j][i + 1] == '<') || (data->map[j][i + 1]
		== '^') || (data->map[j][i + 1] == '>')
		|| (data->map[j][i + 1] == '^')))
	{
		data->map[j][i + 1] = 'P';
		data->bang = 1;
		data->map[j][i] = '0';
	}
}
