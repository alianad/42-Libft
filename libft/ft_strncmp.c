/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:04 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 14:19:04 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Compares not more than n characters. 
 * 			Characters that appear after a `\0' character are not compared.
 * 
 * @return	An integer less than, equal to, or greater than zero 
 * 			if s1 is found to be less than, to match, or to 
 * 			be greater than s2, respectively.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	*string1;
// 	char	*string2;
// 	int		difference;

// 	string1 = "Hello World!";
// 	string2 = "Hello world!";
// 	difference = ft_strncmp(string1, string2, 7);
// 	printf("Difference : %d\n", difference);
// 	return (0);
// }
