/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:32:37 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 01:32:37 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;

	size = max - min;
	if (size < 1)
		return (-1);
	(*range) = (int *)malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (size);
}
