/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:19:36 by junesalaber       #+#    #+#             */
/*   Updated: 2023/12/28 12:57:57 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	len;
	size_t	new_len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	if (start == len)
		return (ft_strdup(""));
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > start)
		len--;
	new_len = len - start;
	str = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], (new_len + 1));
	str[len - start] = '\0';
	return (str);
}

// int main(void)
// {
//     const char *cadena = "¡   Hola, mundo!   ";
//     const char *patron = " ¡!"; // Caracteres a eliminar

//     char *resultado = ft_strtrim(cadena, patron);

//     if (resultado != NULL) {
//         printf("Cadena original: \"%s\"\n", cadena);
//         printf("Cadena sin los caracteres del patrón: \"%s\"\n", resultado);
//         free(resultado);
//     } else {
//         printf("Error al procesar la cadena.\n");
//     }

//     return 0;
// }