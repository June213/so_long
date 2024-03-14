/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 07:59:33 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/08 13:41:23 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return ;
	}
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char	*str = "Hello, world";
// 	int		fd = STDOUT_FILENO;
// 	ft_putendl_fd(str, fd);
// 	return (0);
// }