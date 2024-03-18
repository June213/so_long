/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:05:33 by junesalaber       #+#    #+#             */
/*   Updated: 2024/03/18 12:13:17 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_images(t_game *game)
{
	int	x;
	int	y;

	game->images.wall = mlx_xpm_file_to_image(game->mlx, WALL, &(x), &(y));
	game->images.paper = mlx_xpm_file_to_image(game->mlx, PAPER, &(x), &(y));
	game->images.coin = mlx_xpm_file_to_image(game->mlx, COIN, &(x), &(y));
	game->images.player = mlx_xpm_file_to_image(game->mlx, PLAYER, &(x), &(y));
	game->images.exit = mlx_xpm_file_to_image(game->mlx, EXIT, &(x), &(y));
}

void	put_player_exit(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.exit,
		(x * 128), (y * 128));
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.player,
		(x * 128), (y * 128));
}

void	put_images(t_game *game, int x, int y)
{
	char	temp;

	temp = game->map.map[y][x];
	if (temp == '1')
	{
		put_wall(game, x, y);
		return ;
	}
	put_paper(game, x, y);
	if (temp == 'P')
		put_player(game, x, y);
	if (temp == 'C')
		put_coin(game, x, y);
	if (temp == 'E')
		put_exit(game, x, y);
	if (temp == 'L')
		put_player_exit(game, x, y);
}

void	images(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	load_images(game);
	while (game->map.map[y] != 0)
	{
		x = 0;
		while (game->map.map[y][x] != 0)
		{
			put_images(game, x, y);
			x++;
		}
		y++;
	}
}
