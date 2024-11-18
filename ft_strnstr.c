/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:41:40 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 17:26:55 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Locates the first occurrence of the null-terminated string needle in
 * 			the string haystack,where not more than len characters are searched.
 * 			Characters that appear after a `\0' character are not searched.
 * 
 * @return	If needle is an empty string, haystack is returned; if needle occurs
 * 			nowhere in haystack, NULL is returned; otherwise a pointer to the 
 * 			first character of the first occurrence of needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL && size == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < size)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < size)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	char		*substring;

// 	haystack = "Hi hello world how are you?";
// 	needle = " hello";
// 	substring = ft_strnstr(haystack, needle, sizeof(haystack));
// 	printf("Substring : %s\n", substring);
// 	return (0);
// }
