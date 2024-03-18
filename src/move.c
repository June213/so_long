/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:45:13 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/18 11:25:04 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_0(t_game *game, int movey, int movex)
{
	if (game->map.map[game->player.y][game->player.x] != 'L')
		game->map.map[game->player.y][game->player.x] = '0';
	else
		game->map.map[game->player.y][game->player.x] = 'E';
	game->map.map[game->player.y + movey][game->player.x + movex] = 'P';
	game->player.y += movey;
	game->player.x += movex;
	images(game);
	ft_printf("Moves => %d times\n", game->player.moves++);
}

void	check_collects(t_game *game, int movey, int movex)
{
	game->player.coins--;
	if (game->map.map[game->player.y][game->player.x] != 'L')
		game->map.map[game->player.y][game->player.x] = '0';
	else
		game->map.map[game->player.y][game->player.x] = 'E';
	game->map.map[game->player.y + movey][game->player.x + movex] = 'P';
	game->player.y += movey;
	game->player.x += movex;
	images(game);
	ft_printf("Moves => %d times\n", game->player.moves++);
}

void	move(t_game *game, int movey, int movex)
{
	int	py;
	int	px;

	py = game->player.y;
	px = game->player.x;
	if (game->map.map[py + movey][px + movex] == '1')
		return ;
	if (game->map.map[py + movey][px + movex] == '0')
		return (check_0(game, movey, movex));
	if (game->map.map[py + movey][px + movex] == 'E' && game->player.coins == 0)
		return ((void)(close_window(game)));
	if (game->map.map[py + movey][px + movex] == 'C')
		return (check_collects(game, movey, movex));
	else
		game->map.map[py][px] = '0';
	if (game->map.map[py + movey][px + movex] == 'E')
	{
		game->map.map[game->player.y + movey][game->player.x + movex] = 'L';
		game->player.y += movey;
		game->player.x += movex;
	}
	images(game);
	ft_printf("Moves => %d times\n", game->player.moves++);
}
