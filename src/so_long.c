/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:48:22 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/14 11:58:52 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(1);
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
	flood_fill(&game);
}
