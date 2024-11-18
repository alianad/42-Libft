/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:43 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 15:12:31 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @bried	To count how many digits in the number.
 */
static int	ft_number_size(int n)
{
	long long	number;
	long long	length;

	number = n;
	if (number <= 0)
		length = 1;
	else
		length = 0;
	while (number != 0)
	{
		length++;
		number = number / 10;
	}
	return (length);
}

/**
 * @brief	Allocates and returns a string representing the integer
 * 			received as an argument. Negative numbers must be handled.
 * 
 * @return	The string representing the integer. NULL if fails.
 */
char	*ft_itoa(int n)
{
	long long	number;
	int			count;
	char		*string;

	number = n;
	count = ft_number_size(number);
	string = (char *)malloc(sizeof(char) * (count + 1));
	if (string == NULL)
		return (NULL);
	string[count] = '\0';
	if (number < 0)
	{
		string[0] = '-';
		number = -number;
	}
	if (number == 0)
		string[0] = '0';
	while (number > 0)
	{
		string[count - 1] = number % 10 + '0';
		number = number / 10;
		count--;
	}
	return (string);
}

// int	main(void)
// {
// 	int		number;
// 	char	*string;

// 	number = -908;
// 	string = ft_itoa(number);
// 	if (string == NULL)
// 		printf("ft_itoa failed\n");
// 	else
// 	{
// 		printf("Number : %d\n", number);
// 		printf("String : %s\n", string);
// 		free(string);
// 	}
// 	return (0);
// }
