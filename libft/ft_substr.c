/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:02:05 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/08 11:27:29 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	s += start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}

// int main(void)
// {
//     const char *cadena = "Hola, mundo!";
//     int inicio = 6;
//     size_t longitud = 5;

//     char *subcadena = ft_substr(cadena, inicio, longitud);
//     if (subcadena != NULL) {
//         printf("%s\n", subcadena);
//         free(subcadena);
//     }
//     return (0);
// }