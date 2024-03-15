/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:48:22 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/15 10:46:09 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(1);
}

void	ft_free(t_game *game)
{
	int	y;

	y = 0;
	while (game->map.map[y])
	{
		free(game->map.map[y]);
		y++;
	}
	free(game->map.map);
	game->map.map = NULL;
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		ft_error("Error\nOne argument only");
	ft_bzero(&game, sizeof(t_game));
	parse_input(argv[1]);
	map_len(argv[1], &game);
	read_map(argv[1], &game);
	check_wall(&game);
	check_content(&game);
	locate_player(&game);
	ft_flood_fill(&game, game.player.y, game.player.x);
	map_error(&game);
	read_map(argv[1], &game);
	game.mlx = mlx_init();
	game.mlx_windo = mlx_new_window(game.mlx, 1920, 1080, "so_long");
}
