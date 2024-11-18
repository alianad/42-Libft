/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:26:48 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/11 17:29:49 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Copies len bytes from string src to string dest. The two strings 
 * 			may overlap; the copy is always done in a non-destructive manner.
 * 
 * @return	The original value of dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t size)
{
	const unsigned char	*source;
	unsigned char		*destination;

	if (dest == NULL && src == NULL)
		return ((unsigned char *)dest);
	source = (const unsigned char *)src;
	destination = (unsigned char *)dest;
	if (destination < source)
		while (size--)
			*(destination++) = *(source++);
	else
	{
		source += size;
		destination += size;
		while (size--)
			*(--destination) = *(--source);
	}
	return ((unsigned char *)dest);
}

// int main ()
// {
//   char str[] = "memmove can be very useful......";
//   ft_memmove (str+20,str+15,11);
//   puts (str);
//   return 0;
// }
