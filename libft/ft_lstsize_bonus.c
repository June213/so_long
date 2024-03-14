/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:36:04 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/03 11:47:11 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list *first = ft_lstnew((void *)1);
// 	t_list *second = ft_lstnew((void *)2);
// 	int	size;

// 	first->next = second;
// 	second->next = NULL;
// 	size = ft_lstsize(first);
// 	printf("%d\n", size);
// 	free(first);
// 	free(second);
// 	return (0);
// }