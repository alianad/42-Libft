/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:20:03 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 18:29:20 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Appends string src to the end of dest and will append at most size - 
 * 			strlen(dest) - 1 characters. It will then NUL-terminate, unless size
 * 			is 0 or the original dest string was longer than size.
 * 
 * @return	Initial length of dest + the length of src.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (size + src_length);
	i = 0;
	while (i < size - dest_length - 1 && src[i])
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[50] = "Hello World! ";
// 	size_t	length;

// 	src = "Good Morning!";
// 	length = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Dest : %s\n", dest);
// 	printf("Length : %zu\n", length);
// 	return (0);
// }
