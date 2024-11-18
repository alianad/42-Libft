/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:07:06 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:35:21 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Allocates sufficient memory for a copy of the string s1, 
 * 			does the copy, and returns a pointer to it.
 * 
 * @return	A pointer to the copied string.
 */
char	*ft_strdup(const char *s)
{
	char	*pointer;
	int		i;

	pointer = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pointer[i] = s[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}

// int	main(void)
// {
// 	const char	*string;
// 	char		*copied;

// 	string = "Hello world";
// 	copied = ft_strdup(string);
// 	if (copied == NULL)
// 		printf("ft_strdup failed\n");
// 	else
// 	{
// 		printf("Copied string : %s\n", copied);
// 		free(copied);
// 	}
// 	return (0);
// }
