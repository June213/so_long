/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:05:28 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/15 08:40:12 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_flood_fill(t_game *game, int y, int x)
{
	if (game->map.map[y][x] == '1' || game->map.map[y][x] == 'F')
		return ;
	if (game->map.map[y][x] == 'C')
		game->player.coins++;
	if (game->map.map[y][x] == 'E')
		game->player.exit = true;
	game->map.map[y][x] = 'F';
	ft_flood_fill(game, y + 1, x);
	ft_flood_fill(game, y - 1, x);
	ft_flood_fill(game, y, x + 1);
	ft_flood_fill(game, y, x - 1);
}

void	map_error(t_game *game)
{
	if (game->map.coin != game->player.coins || game->player.exit == false)
		ft_error("Error\nMap is not playable");
	ft_free(game);
}
