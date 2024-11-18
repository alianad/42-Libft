/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:53:57 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:50:02 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the last occurrence of c (converted to a char) in the 
 * 			string pointed to by s. The terminating null character is considered 
 * 			to be part of the string.
 * 
 * @return	A pointer to the first occurrence of c in s, 
 * 			or NULL if c is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	if (s[length] == (unsigned char)c)
		return ((char *)s + length);
	while (length > 0)
	{
		if (s[length - 1] == (unsigned char)c)
			return ((char *)s + length - 1);
		length--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*string;
// 	char		*last_occurence;
// 	char		c;

// 	string = "Hello World!";
// 	c = 'o';
// 	last_occurence = ft_strrchr(string, c);
// 	printf("Last occurence : %s\n", last_occurence);
// 	return (0);
// }
