/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 07:03:31 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/15 08:54:46 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[j] = ((unsigned char *)src)[i];
		i++;
		j++;
	}
	return (dest);
}
/*
int	main(void)
{
	char text[] = "hola que tal";
	char des[10];
	
	printf("%s\n", ft_memcpy(des, text, 4));
	return (0);
}
*/