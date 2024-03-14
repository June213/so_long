/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:58:58 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/26 15:14:22 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)ft_calloc(len, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}

// int	main(void)
// {
// 	char 	*text = "Hola que tal";
// 	char	*dup;

// 	dup = ft_strdup(text);
// 	printf("%s\n", dup);
// 	return (0);
// }