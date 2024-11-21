/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:51 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/07 17:06:51 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Deletes and frees the given node and every successor of that node, 
 * 			using the function ’del’ and free. Finally, the pointer to the list 
 * 			must be set to NULL.
 * @return	None.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (*lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
