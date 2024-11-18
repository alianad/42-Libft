/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:14:43 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:32:05 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Writes len bytes of value c (unsigned char) to the string b.
 * 
 * @return	A pointer to the memory area `b`
 */
void	*ft_memset(void *b, int c, size_t size)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *)b;
	i = 0;
	while (i < size)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)b);
}

// int	main(void)
// {
// 	char	string[20] = "Hello, World!";

//     ft_memset(string, '*', 5);
// 	printf("After memset : %s\n", string);
// 	return (0);
// }
