/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:27:26 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/03 11:35:06 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*first = ft_lstnew((void *)1);
// 	t_list	*second = ft_lstnew((void *)2);
// 	t_list	*third = ft_lstnew((void *)3);
// 	t_list	*list;
// 	t_list	*temp;

// 	list = NULL;
// 	ft_lstadd_front(&list, first);
// 	ft_lstadd_front(&list, second);
// 	ft_lstadd_front(&list, third);
// 	temp = list;
// 	while (temp != NULL)
// 	{
// 		printf("%d -> ", (int)temp->content);
// 		 temp = temp->next;
// 	}
// 	printf("NULL\n");
//     free(first);
//     free(second);
//     free(third);
//     return (0);
// }