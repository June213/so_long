/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:32:41 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/15 12:12:07 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = -1;
	while (++i < size && *dest)
	{
		dest++;
	}
	len = ft_strlcpy(dest, src, size - i);
	return (len + i);
}

/*
int main() {
    char text[] = "que tal";
    char dest[20] = "hola ";

    printf("String antes: %s\n", dest);
	size_t	length = ft_strlcat(dest, text, 13);
	printf("String despues: %s\n", dest);
    printf("Longitud: %zu\n", length);

    return 0;
}
*/