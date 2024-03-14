/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:32 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/14 10:32:39 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_freegnl(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_read_file(int fd, char *saved)
{
	int			readline;
	char		*buffer;

	readline = 1;
	buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_freegnl(&saved));
	buffer[0] = '\0';
	while (readline > 0 && !ft_strchrgnl(buffer, '\n'))
	{
		readline = read(fd, buffer, BUFFER_SIZE);
		if (readline > 0)
		{
			buffer[readline] = '\0';
			saved = ft_strjoingnl(saved, buffer);
		}
	}
	free (buffer);
	if (readline == -1)
		return (ft_freegnl(&saved));
	return (saved);
}

char	*ft_new_line(char *saved)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchrgnl(saved, '\n');
	len = (ptr - saved) + 1;
	line = ft_substrgnl(saved, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*ft_clean_saved(char *saved)
{
	char	*new;
	char	*ptr;
	int		len;

	ptr = ft_strchrgnl(saved, '\n');
	if (!ptr)
	{
		new = NULL;
		return (ft_freegnl(&saved));
	}
	else
		len = (ptr - saved) + 1;
	if (!saved[len])
		return (ft_freegnl(&saved));
	new = ft_substrgnl(saved, len, ft_lengnl(saved) - len);
	ft_freegnl(&saved);
	if (!new)
		return (NULL);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*saved = NULL;
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((saved && !ft_strchrgnl(saved, '\n')) || !saved)
		saved = ft_read_file(fd, saved);
	if (!saved)
		return (NULL);
	line = ft_new_line(saved);
	if (!line)
		return (ft_freegnl(&saved));
	saved = ft_clean_saved(saved);
	return (line);
}
