/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:57:52 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 12:22:47 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Converts a string to an integer.
 * 
 * @return	The integer representation of
 * 			the initial numeric portion of the string.
 */
int	ft_atoi(const char *s)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if ((s[i] == '+') || (s[i] == '-'))
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		sum = (sum * 10) + (s[i] - '0');
		i++;
	}
	return (sum * sign);
}

// int	main(void)
// {
// 	const char	*string;
// 	int			number;

// 	string = "-12345abc";
// 	number = ft_atoi(string);
// 	printf("Number : %d", number);
// 	return (0);
// }
