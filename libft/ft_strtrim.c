/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:45:35 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 14:54:22 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

/**
 * @brief	Allocates and returns a copy of ’s1’ with the characters specified 
 * 			in ’set’ removed from the beginning and the end of the string.
 * 
 * @return	The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		length;
	int		i;
	int		j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	length = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	if (i == length)
		return (ft_strdup(""));
	j = length - 1;
	while (s1[j] && is_set(s1[j], set))
		j--;
	length = j - i + 1;
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	ft_memcpy(string, s1 + i, length);
	string[length] = '\0';
	return (string);
}

// int	main(void)
// {
// 	char const	*string;
// 	char const	*set;
// 	char		*trim;

// 	string = "___ *Hello* ___";
// 	set = "_ ";
// 	trim = ft_strtrim(string, set);
// 	if (trim == NULL)
// 		printf("ft_strtrim failed\n");
// 	else
// 	{
// 		printf("Original string : %s\n", string);
// 		printf("Trimmed string : %s\n", trim);
// 		free(trim);
// 	}
// 	return (0);
// }
