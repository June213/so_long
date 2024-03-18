/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:47:13 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/18 13:10:01 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	parse_input(char *argv)
{
	int	len;

	len = ft_strlen(argv);
	if (ft_strncmp(&argv[len - 4], ".ber", 4) != 0)
		ft_error("Error\nIncorrect file type");
}

void	map_len(char *argv, t_game *game)
{
	int		fd;
	char	*line;
	char	*temp;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		ft_error("Error\nFile error");
	line = get_next_line(fd);
	if (!line)
		ft_error("Error\nEmpty map");
	game->map.x = ft_strlen(line) - 1;
	while (line)
	{
		if (line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		if (ft_strlen(line) != game->map.x)
			ft_error("Error\nIrregular map");
		game->map.y++;
		temp = line;
		line = get_next_line(fd);
		free(temp);
	}
	close (fd);
}

void	read_map(char *argv, t_game *game)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		ft_error("Error\nFile error");
	game->map.map = malloc(sizeof(char *) * (game->map.y + 1));
	if (!game->map.map)
		return ;
	game->map.map[game->map.y] = NULL;
	line = get_next_line(fd);
	if (!line)
		ft_error("Error\nEmpty map");
	i = 0;
	while (i < game->map.y)
	{
		game->map.map[i] = line;
		line = get_next_line(fd);
		i++;
	}
	close(fd);
}

void	check_wall(t_game *game)
{
	int	x;
	int	y;

	x = game->map.x;
	y = game->map.y;
	while (x--)
	{
		if (game->map.map[0][x] != '1' || game->map.map[y - 1][x] != '1')
			ft_error("Error\nNot closed by wall");
	}
	while (y--)
	{
		if (game->map.map[y][0] != '1'
			|| game->map.map[y][game->map.x - 1] != '1')
			ft_error("Error\nNot closed by wall");
	}
}

void	check_content(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map.map[y])
	{
		x = 0;
		while (game->map.map[y][x])
		{
			if (game->map.map[y][x] == 'P')
				game->map.player++;
			else if (game->map.map[y][x] == 'C')
				game->map.coin++;
			else if (game->map.map[y][x] == 'E')
				game->map.exit++;
			else if (game->map.map[y][x] != '1' && game->map.map[y][x] != '0'
				&& game->map.map[y][x] != '\n')
				ft_error("Error\nInvalid map (0 and 1)");
			x++;
		}
		y++;
	}
	if (game->map.player != 1 || game->map.coin < 1 || game->map.exit != 1)
		ft_error("Error\nInvalid map");
}
