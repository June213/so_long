/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:32:28 by jsalaber          #+#    #+#             */
/*   Updated: 2023/12/26 14:56:49 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p != NULL)
		ft_bzero(p, count * size);
	return (p);
}

// int	main(void)
// {
// 	int	*arr;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	printf("Valores %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
// 	free(arr);
// }