/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:51 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/12 12:42:23 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	To count how many words to split in the given string.
 */
static int	ft_count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

/**
 * @brief	To allocate substring for array[i].
 */
static char	*ft_substring(char *s, char c)
{
	char	*substring;
	int		length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	substring = (char *)malloc(sizeof(char) * (length + 1));
	if (substring == NULL)
		return (NULL);
	substring[length] = '\0';
	while (length > 0)
	{
		substring[length - 1] = s[length - 1];
		length--;
	}
	return (substring);
}

/**
 * @brief	To allocate array & return (1) if success.
 */
static int	ft_subarray(char **array, char *s, char c, int count)
{
	int		i;

	i = 0;
	while (*s && i < count)
	{
		if (*s != c)
		{
			array[i] = ft_substring(s, c);
			if (array[i] == NULL)
			{
				while (i--)
					free(array[i]);
				return (0);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	array[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**array;

	if (s == NULL)
		return (NULL);
	count = ft_count((char *)s, c);
	array = (char **)malloc((sizeof(char *) * (count + 1)));
	if (array == NULL)
		return (NULL);
	if (ft_subarray(array, (char *)s, c, count))
		return (array);
	free(array);
	return (NULL);
}

// int	main(void)
// {
// 	char	**array;
// 	char	*string;
// 	int		i;

// 	string = "      split       this for   me  !       ";
// 	array = ft_split(string, ' ');
// 	if (array == NULL)
// 		printf("ft_split failed.\n");
// 	else
// 	{
// 		i = 0;
// 		printf("String : '%s'\n", string);
// 		printf("Words : %d\n", ft_count(string, ' '));
// 		while (array[i])
// 		{
// 			printf("array[%d] = '%s'\n", i, array[i]);
// 			free(array[i]);
// 			i++;
// 		}
// 		free(array);
// 	}
// 	return (0);
// }
