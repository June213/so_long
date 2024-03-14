/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:50:16 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/02 11:59:54 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count ++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_str(long num, char *str, int len)
{
	if (!num)
	{
		str[0] = '0';
		return (str);
	}
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	num = (long)n;
	len = ft_count(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[len] = '\0';
	return (ft_str(num, str, len));
}

// int	main(void)
// {
// 	int	nu = -10;
//  char	*text = ft_itoa(nu);
// 	printf("%s\n", text);
// 	free (text);
// 	return (0);
// }