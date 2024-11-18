/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:28:11 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 15:37:01 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Applies the function f to each character of the string s, passing 
 * 			its index as the first argument and the character itself as the 
 * 			second. A new string is created (using malloc(3)) to collect the
 * 			results from the successive applications of f.
 * 
 * @return	The string created from the successive applications of ’f’.
 * 			Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (string == NULL)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
