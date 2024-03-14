/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:55:21 by junesalaber       #+#    #+#             */
/*   Updated: 2023/12/27 17:11:26 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*finalstr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	finalstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!finalstr)
		return (NULL);
	ft_memcpy(finalstr, s1, len1);
	ft_memcpy(finalstr + len1, s2, len2);
	finalstr[len1 + len2] = '\0';
	return (finalstr);
}

// int main(void)
// {
//     const char *cadena1 = "Hola, ";
//     const char *cadena2 = "mundo!";

//     char *resultado = ft_strjoin(cadena1, cadena2);
//     if (resultado != NULL) {
//         printf("%s\n", resultado);
//         free(resultado);
//     } else {
//         printf("Error al unir las cadenas.\n");
//     }
//     return 0;
// }