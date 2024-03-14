/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:22:44 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/11 14:18:20 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long int n, char c)
{
	int		count;
	char	hexdigit;

	count = 0;
	if (n >= 16)
	{
		count += ft_printhex(n / 16, c);
		n = n % 16;
	}
	if (n <= 9)
		hexdigit = (n + '0');
	else
	{
		if (c == 'x')
			hexdigit = n + 87;
		else
			hexdigit = n + 55;
	}
	ft_printchar(hexdigit);
	count++;
	return (count);
}
