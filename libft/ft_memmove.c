/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 07:16:25 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/15 08:54:56 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	if (tempdest < tempsrc)
	{
		while (i < n)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
	}
	else
	{
		while ((n--) > 0)
			tempdest[n] = tempsrc[n];
	}
	return (tempdest);
}

/*
int main(void)
{
	char text[] = "Hola que tal";
	char destino[20];

	ft_memmove(destino, text, 6);
	printf("String copiado: %s\n", destino);

    return 0;
}
*/