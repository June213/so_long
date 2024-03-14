/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:26:23 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/11 14:19:40 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_countnbr(int nb);
int		ft_printnbr(int n);
int		ft_count_unsignednbr(unsigned int nb);
int		ft_printunsinbr(unsigned int n);
int		ft_printhex(unsigned long int n, char c);
int		ft_printptr(unsigned long int n);
int		ft_printf(char const *str, ...);

#endif