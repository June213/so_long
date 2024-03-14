/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:42:49 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/08 10:08:00 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main() {
    char text[] = "Hola que tal";
    char dest[20];

    printf("String antes: %s\n", dest);
	ft_strlcpy(dest, text, 15);
	printf("String despues: %s\n", dest);
    printf("Longitud: %zu\n", ft_strlcpy(dest, text, 15));

    return 0;
}
*/