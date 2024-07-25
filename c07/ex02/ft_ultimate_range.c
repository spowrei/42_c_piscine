/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:32:37 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 17:48:56 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	(*range) = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	index = 0;
	while (index < size)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (size);
}
