/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:37:26 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:05:55 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Writes n zeroed bytes to the string b. 
 * 			If n is zero, bzero() does nothing.
 * 
 * @return	None.
 */
void	ft_bzero(void *b, size_t size)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)b;
	while (i < size)
	{
		pointer[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	string[20] = "Hello World!";

// 	ft_bzero(string + 6, 5);
// 	printf("After bzero : %s\n", string);
// 	return (0);
// }
