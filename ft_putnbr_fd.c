/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:32:08 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 20:47:42 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Outputs the integer ’n’ to the given file descriptor.
 * 
 * @return	None.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number <= 9)
		ft_putchar_fd(number + '0', fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}

// int	main(void)
// {
// 	int	number;

// 	number = 987;
// 	ft_putnbr_fd(number, 1);
// 	return (0);
// }
