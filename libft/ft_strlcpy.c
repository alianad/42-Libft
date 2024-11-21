/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:12:37 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 18:07:01 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies up to size-1 characters from  the source string to the 
 * 			destination buffer, and null-terminates the result 
 * 			if size is greater than 0.
 * 
 * @return	The total length of the source string.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[] = "Source string";
// 	char	dest[20];
// 	size_t	length;

// 	length = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Dest : %s\n", dest);
// 	printf("Length : %zu\n", length);
// 	return (0);
// }
