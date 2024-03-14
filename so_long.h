/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:05:59 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/14 11:59:22 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "libft/get_next_line.h"
# include "printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_map
{
	char	**map;
	int		x;
	int		y;
	int		player;
	int		coin;
	int		exit;
}	t_map;

typedef struct s_player
{
	int		x;
	int		y;
	int		coins;
	bool	exit;
}	t_player;

typedef struct s_game
{
	void		*mlx;
	void		*mlx_windo;
	t_map		map;
	t_player	player;
}	t_game;

// input.c
void	parse_input(char *argv);
void	map_len(char *argv, t_game *game);
void	read_map(char *argv, t_game *game);
void	check_wall(t_game *game);
void	check_content(t_game *game);

// player.c
void	locate_player(t_game *game);

// floodfill.c
void	flood_fill_util(t_game *game, int y, int x);
void	flood_fill(t_game *game);

// so_long.c
void	ft_error(char *str);

#endif