/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:40 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 20:19:12 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Outputs the string ’s’ to the given file descriptor 
 * 			followed by a newline.
 * 
 * @return	None.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

// int	main(void)
// {
// 	char	*string;

// 	string = "Hello";
// 	ft_putendl_fd(string, 1);
// 	return (0);
// }
