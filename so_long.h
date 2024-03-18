/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:05:59 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/18 11:31:35 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "libft/get_next_line.h"
# include "printf/ft_printf.h"
# include "mlx/mlx.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# define WALL "textures/wall.xpm"
# define PAPER "textures/paper.xpm"
# define COIN "textures/coin.xpm"
# define PLAYER "textures/player.xpm"
# define EXIT "textures/exit.xpm"
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_DOWN 125
# define KEY_UP 126
# define Q 12
# define W 13
# define A 0
# define S 1
# define D 2
# define ESC 0x35

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
	int		collect;
	int		moves;
}	t_player;

typedef struct s_images
{
	void	*paper;
	void	*player;
	void	*coin;
	void	*exit;
	void	*wall;
}	t_images;

typedef struct s_game
{
	void		*mlx;
	void		*mlx_windo;
	t_map		map;
	t_player	player;
	t_images	images;
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
void	ft_flood_fill(t_game *game, int y, int x);
void	map_error(t_game *game);

// moves.c
void	check_0(t_game *game, int movey, int movex);
void	check_collects(t_game *game, int movey, int movex);
void	move(t_game *game, int movey, int movex);

// hooks.c
int		close_window(t_game *game);
int		keys(int keycode, t_game *game);
void	hooks(t_game *game);

// put_images.c
void	put_paper(t_game *game, int x, int y);
void	put_wall(t_game *game, int x, int y);
void	put_player(t_game *game, int x, int y);
void	put_coin(t_game *game, int x, int y);
void	put_exit(t_game *game, int x, int y);

// images.c
void	load_images(t_game *game);
void	put_player_exit(t_game *game, int x, int y);
void	put_images(t_game *game, int x, int y);
void	images(t_game *game);

// so_long.c
void	ft_error(char *str);
void	ft_free(t_game *game);

#endif