/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:47:13 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/08 10:13:27 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//(str + len) se pone en el inicio y va directamente a la posicion de len

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = ((char *)s);
	len = ft_strlen(s);
	while (len != 0)
	{
		if (str[len] == (char)c)
		{
			return (str + len);
		}
		len--;
	}
	if (str[0] == (char)c)
		return (str);
	return (0);
}
/*
int	main(void)
{
	char	text[] = "hola que tal";
	int		a = 'l';
	char	*result;
	
	result = ft_strrchr(text, a);
	if (result != NULL)
		printf("%c en posicion %ld\n", a, result - text); 
		//result apunta a laposicion del caracter encontrado
		//text es un puntero al inicio de la cadena
	else
		printf("Caracter no encontrado\n"); 
	return (0);
}
*/