/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:48:38 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/07 15:48:38 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Adds the node ’new’ at the beginning of the list.
 * 
 * @return	None.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
