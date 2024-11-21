/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:04:58 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 17:18:56 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Contiguously allocates enough space for count objects that are 
 * 			size bytes of memory each and returns a pointer to the allocated 
 * 			memory. The allocated memory is filled with bytes of value zero.
 * 
 * @return	A pointer to allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size != 0 && count > (UINT_MAX / size))
		return (NULL);
	pointer = malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, (count * size));
	return (pointer);
}

// int	main(void)
// {
// 	int	elements;
// 	int	*array;
// 	int	i;

// 	elements = 5;
// 	array = ft_calloc(elements, sizeof(int));
// 	if (array == NULL)
// 		printf("ft_calloc failed.\n");
// 	else
// 	{
// 		i = 0;
// 		while (i < elements)
// 		{
// 			printf("array[%d] = %d\n", i, array[i]);
// 			i++;
// 		}
// 		free(array);
// 	}
// 	return (0);
// }
