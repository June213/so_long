/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:01:30 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/08 11:59:28 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > i + j)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	principal[] = "Aqui no hay ningun gato";
// 	char	secundaria[] = "ningun";
// 	size_t	n = 11;

// 	printf("%s\n", ft_strnstr(principal, secundaria, n));
// 	return (0);
// }