/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:36:41 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/13 12:47:10 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int	main(void)
{
	char	text[] = "hola que tal";
	printf("%s\n", ft_memset(text, '-', 4));
	return (0);
}
*/