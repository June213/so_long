/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:49:39 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/03 10:38:16 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

// int	main(void) 
// {
//     t_list *list = ft_lstnew("Hola");
//     if (list != NULL) {
//         printf("Contenido de la lista: %s\n", (char *)list->content);
//     } else {
//         printf("Fallo al crear la lista\n");
//     }
//     free(list);
//     return 0;
// }