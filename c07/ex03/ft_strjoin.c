/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:34:09 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 01:34:44 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index2] != '\0')
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	if (size < 1)
	{
		ptr = (char *)malloc(sizeof(char));
		if (ptr)
			*ptr = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(size * sizeof(char));
	ptr[0] = '\0';
	i = 0;
	while (strs[i] != NULL)
	{
		ft_strcat(ptr, strs[i]);
		if (strs[i + 1] != NULL)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
