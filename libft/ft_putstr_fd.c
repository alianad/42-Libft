/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:36:35 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 20:16:55 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Outputs the string ’s’ to the given file descriptor.
 * 
 * @return	None.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

// int	main(void)
// {
// 	char	*string;

// 	string = "Hello";
// 	ft_putstr_fd(string, 1);
// 	return (0);
// }
