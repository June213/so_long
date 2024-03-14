/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:40:18 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/03 11:22:47 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
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
// 	ft_lstadd_back(&list, first);
// 	ft_lstadd_back(&list, second);
// 	ft_lstadd_back(&list, third);
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