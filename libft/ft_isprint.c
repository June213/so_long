/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:17:34 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/13 12:34:34 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}

/*
int	main(void)
{
	int	a;

	a = 'a';
	printf("%d\n", ft_isprint(a));
	return (0);
}
*/