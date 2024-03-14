/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:46 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/14 10:32:19 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_lengnl(char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		count ++;
		s++;
	}
	return (count);
}

char	*ft_strchrgnl(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (0);
}

char	*ft_strjoingnl(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = malloc(sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	str = (char *)malloc((ft_lengnl(s1) + ft_lengnl(s2) + 1) * sizeof(char));
	if (!str)
		return (ft_freegnl(&s1));
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2 [j];
	str[i + j] = '\0';
	free (s1);
	return (str);
}

char	*ft_substrgnl(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_lengnl(s))
	{
		str = malloc(sizeof(char) * (1));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (ft_lengnl(s) - start < len)
		len = ft_lengnl(s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start < ft_lengnl(s) && i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
