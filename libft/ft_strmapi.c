/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:51:09 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/02 12:12:34 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static char	ft_uppercase(unsigned int index, char c)
// {
// 	while (c >= 'a' && c <= 'z')
// 	{
// 		c = c - 32;
// 		return (c);
// 	}
// 	return (c);
// }

// int main() {
//     const char *text = "Hello, World!";
//     printf("Original: %s\n", text);

//     char *result = ft_strmapi(text, ft_uppercase);
//     if (result) {
//         printf("Tras strmapi: %s\n", result);
//         free(result);
//     } else {
//         printf("Error al asignar memoria.\n");
//     }
//     return (0);
// }