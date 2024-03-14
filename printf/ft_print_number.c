/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:32:56 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/11 13:16:31 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnbr(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0 && nb != -2147483648)
	{
		nb = -nb;
		len ++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	count = ft_countnbr(n);
	if (n == -2147483648)
	{
		ft_printstr("-2147483648");
		count = 11;
	}
	else if (n < 0)
	{
		ft_printchar('-');
		ft_printnbr(-n);
	}
	else if (n >= 10)
	{
		ft_printnbr(n / 10);
		ft_printchar(n % 10 + '0');
	}
	else
		ft_printchar(n + '0');
	return (count);
}

int	ft_count_unsignednbr(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		len ++;
	}
	return (len);
}

int	ft_printunsinbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	else
		count = ft_count_unsignednbr(n);
	if (n >= 10)
	{
		ft_printunsinbr(n / 10);
		ft_printchar(n % 10 + '0');
	}
	else
		ft_printchar(n + '0');
	return (count);
}
