/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junesalaberria <junesalaberria@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:01:16 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/04 11:58:01 by junesalaber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void print_int(void *content) {
//     printf("%d\n", *(int *)content);
// }

// int main(void) 
// {
// 	t_list *first = ft_lstnew((void *)1);
// 	t_list *second = ft_lstnew((void *)2);
//     int *number1 = malloc(sizeof(int));
// 	int *number2 = malloc(sizeof(int));

//     *number1 = 42;
// 	*number2 = 100;
//     first->content = number1;
//     first->next = second;
// 	second->content = number2;
// 	second->next = NULL;

//     ft_lstiter(first, print_int); 

//     return 0;
// }