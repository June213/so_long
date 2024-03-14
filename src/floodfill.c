/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:05:28 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/14 12:11:16 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	flood_fill_util(t_game *game, int y, int x)
{
	if (game->map.map[y][x] == '1' || game->map.map[y][x] == 'F')
		return ;
	if (game->map.map[y][x] == 'C')
		game->player.coins++;
	if (game->map.map[y][x] == 'E')
		game->player.exit = true;
	game->map.map[y][x] = 'F';
	flood_fill_util(game, y + 1, x);
	flood_fill_util(game, y - 1, x);
	flood_fill_util(game, y, x + 1);
	flood_fill_util(game, y, x - 1);
}

void	flood_fill(t_game *game)
{
	flood_fill_util(game, game->player.y, game->player.x);
}
