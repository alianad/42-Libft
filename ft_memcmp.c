/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:58:58 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:17:56 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Compares byte string s1 against byte string s2.
 * 			Both strings are assumed to be n bytes long.
 * 
 * @return	Zero if the two strings are identical, otherwise 
 * 			returns the difference between the first two differing bytes.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < size && str1[i] == str2[i])
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int	main(void)
// {
// 	const char	*str1;
// 	const char	*str2;
// 	int			difference;

// 	str1 = "ABCDEFGH";
// 	str2 = "ABCXYZ";
// 	difference = ft_memcmp(str1, str2, 8);
// 	printf("Difference : %d\n", difference);
// 	return (0);
// }
