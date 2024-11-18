/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:38:35 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 14:05:51 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Allocates and returns a new string, which is the result of 
 * 			the concatenation of ’s1’ and ’s2’.
 * 
 * @return	The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	s1_length;
	size_t	s2_length;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	string = (char *)malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (string == NULL)
		return (NULL);
	ft_memcpy(string, s1, s1_length);
	ft_memcpy(string + s1_length, s2, s2_length);
	string[s1_length + s2_length] = '\0';
	return (string);
}

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*s2;
// 	char		*string;

// 	s1 = "Hello ";
// 	s2 = "World !";
// 	string = ft_strjoin(s1, s2);
// 	if (string == NULL)
// 		printf("Join string failed\n");
// 	else
// 	{
// 		printf("s1 : %s\n", s1);
// 		printf("s2 : %s\n", s2);
// 		printf("Final string : %s\n", string);
// 		free(string);
// 	}
// 	return (0);
// }
