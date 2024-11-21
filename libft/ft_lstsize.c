/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:33:16 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/07 16:33:16 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Counts the number of nodes in a list.
 * 
 * @return	The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (lst == NULL)
		return (0);
	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
