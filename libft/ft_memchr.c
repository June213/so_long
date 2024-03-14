/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:21:28 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/26 09:47:11 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    char    text[] = "hola";
    int     a = 'o';
	size_t	len = 3;

    printf("%s\n", ft_memchr(text, a, len));
    return (0);
}
*/