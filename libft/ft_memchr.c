/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:33:25 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 17:28:02 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of c (unsigned char) in string s.
 * 
 * @return	A pointer to the byte located, 
 * 			or NULL if no such byte exists within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t size)
{
	const unsigned char	*pointer;
	size_t				i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < size)
	{
		if (pointer[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*string;
// 	char		*first_occurence;
// 	char		c;

// 	string = "Find the character 'o' in this string";
// 	c = 'o';
// 	first_occurence = ft_memchr(string, c, ft_strlen(string));
// 	printf("First occurence of 't' : %s\n", first_occurence);
// 	return (0);
// }
