/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:35 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:40:12 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of c (converted to a char) in the
 * 			string pointed to by s. The terminating null character is considered 
 * 			to be part of the string.
 * 
 * @return	A pointer to the first occurrence of c in s, 
 * 			or NULL if c is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	const char	*string;
// 	char		*first_occurence;
// 	char		c;

// 	string = "Hello World!";
// 	c = 'o';
// 	first_occurence = ft_strchr(string, c);
// 	printf("First occurence : %s\n", first_occurence);
// 	return (0);
// }
