/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:34:09 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 17:50:10 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

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

int	total_size_calculator(int size, char **strs, char *sep)
{
	int	index;
	int	total_size;

	total_size = 0;
	index = 0;
	while (index < size)
	{
		total_size += ft_strlen(strs[index]);
		index++;
	}
	index = 0;
	while (index < size - 1)
	{
		total_size += ft_strlen(sep);
		index++;
	}
	total_size++;
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		total_size;

	if (size < 1)
	{
		ptr = (char *)malloc(sizeof(char));
		if (ptr)
			*ptr = '\0';
		return (ptr);
	}
	total_size = total_size_calculator(size, strs, sep);
	ptr = (char *)malloc(total_size * sizeof(char));
	ptr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (strs[i + 1] != NULL)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
