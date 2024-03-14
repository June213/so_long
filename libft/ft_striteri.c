/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:17:09 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/02 12:38:56 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	ft_uppercase(unsigned int index, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int main() {
//     char text[] = "Hello, World!";

//     printf("Texto original:\n%s\n", text);

//     ft_striteri(text, ft_uppercase);

//     printf("Texto tras ft_striteri:\n%s\n", text);

//     return 0;
// }