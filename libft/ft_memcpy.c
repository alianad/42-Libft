/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:03:20 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:24:13 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies n bytes from memory area src to memory area dest.
 * 			If dest and src overlap, behavior is undefined.
 * 
 * @return	The original value of dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	const unsigned char	*source;
	unsigned char		*destination;
	size_t				i;

	if (dest == NULL && src == NULL)
		return ((unsigned char *)dest);
	source = (const unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	while (i < size)
	{
		destination[i] = source[i];
		i++;
	}
	return ((unsigned char *)dest);
}

// int	main(void)
// {
// 	char	string[14] = "Hello, World!";

// 	ft_memcpy(string + 7, string, 5);
// 	printf("After memcpy : %s\n", string);
// 	return (0);
// }
