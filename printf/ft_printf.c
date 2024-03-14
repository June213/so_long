/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:09:04 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/11 14:20:16 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// falta la p
static int	ft_check(va_list vargs, char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count = ft_printchar(va_arg(vargs, int));
	else if (str == 's')
		count = ft_printstr(va_arg(vargs, char *));
	else if (str == '%')
		count = ft_printchar('%');
	else if (str == 'd' || str == 'i')
		count = ft_printnbr(va_arg(vargs, int));
	else if (str == 'u')
		count = ft_printunsinbr(va_arg(vargs, unsigned int));
	else if (str == 'x' || str == 'X')
		count = ft_printhex(va_arg(vargs, unsigned int), str);
	else if (str == 'p')
		count = ft_printptr(va_arg(vargs, unsigned long int));
	else
		count = ft_printchar(str);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str)
		return (0);
	va_start(vargs, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check(vargs, str[i + 1]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(vargs);
	return (len);
}

// int	main(void)
// {
// 	int				num = -9;
// 	unsigned int	i = 5;
// 	char			s = 'c';
// 	char			*str = "Hola";
// 	unsigned int	hx = 16;
// 	ft_printf("string%%: %d %u %c %s %x %X %p\n", num, i, s, str, hx, hx, "");
// 	return (0);
// }