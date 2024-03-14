/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:54:47 by jsalaber          #+#    #+#             */
/*   Updated: 2024/03/11 09:26:44 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == ' ');
}

long	ft_atoi(const char *str)
{
	int		i;
	int		count_neg;
	long	nb;

	i = 0;
	count_neg = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' && ft_isdigit(str[i + 1]))
		count_neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	return (nb * count_neg);
}

// int	main(int argc, char **argv)
// {
// 	printf("%d\n", ft_atoi(argv[1]));
// 	return (0);
// }