/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:30:31 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/18 13:09:39 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	close_window(t_game *game)
{
	mlx_destroy_window(game->mlx, game->mlx_windo);
	mlx_destroy_image(game->mlx, game->images.paper);
	mlx_destroy_image(game->mlx, game->images.player);
	mlx_destroy_image(game->mlx, game->images.coin);
	mlx_destroy_image(game->mlx, game->images.exit);
	ft_free(game);
	exit(0);
}

int	keys(int keycode, t_game *game)
{
	if (keycode == Q || keycode == ESC)
		close_window(game);
	else if (keycode == W || keycode == KEY_UP)
		move(game, -1, 0);
	else if (keycode == S || keycode == KEY_DOWN)
		move(game, 1, 0);
	else if (keycode == D || keycode == KEY_RIGHT)
		move(game, 0, 1);
	else if (keycode == A || keycode == KEY_LEFT)
		move(game, 0, -1);
	return (0);
}

void	hooks(t_game *game)
{
	mlx_hook(game->mlx_windo, 17, 1, close_window, game);
	mlx_hook(game->mlx_windo, 2, 1, keys, game);
}
