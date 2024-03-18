/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:33:21 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/18 10:34:15 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_paper(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.paper,
		(x * 128), (y * 128));
}

void	put_wall(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.wall,
		(x * 128), (y * 128));
}

void	put_player(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.player,
		(x * 128), (y * 128));
}

void	put_coin(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.coin,
		(x * 128), (y * 128));
}

void	put_exit(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->mlx_windo, game->images.exit,
		(x * 128), (y * 128));
}
