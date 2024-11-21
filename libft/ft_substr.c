/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:19:14 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 16:37:07 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Allocates and returns a substring from the string ’s’.
 * 			The substring begins at index ’start’ and is of maximum size ’len’.
 * 
 * @return	The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
	{
		substring = (char *)malloc(sizeof(char) * (1));
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (len > length - start)
		len = length - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	ft_memcpy(substring, s + start, len);
	substring[len] = '\0';
	return (substring);
}

// int	main()
// {
// 	const char		*string;
// 	char			*substring;
// 	unsigned int	start;
// 	size_t			length;

// 	string = "Hello, World!";
// 	start = 7;
//     length = 5;
// 	substring = ft_substr(string, start, length);
//     if (substring == NULL)
// 	{
//         printf("Failed to allocate memory for substring\n");
//         return (0);
//     }
//     printf("Source string : \"%s\"\n", string);
//     printf("Substring : \"%s\"\n", substring);
//     free(substring);
//     return 0;
// }
