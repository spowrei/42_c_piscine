/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:31:48 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 01:31:48 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	size;
	int	index;

	size = max - min;
	if (size < 1)
		return (NULL);
	p = (int *)malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		p[index] = index + min;
		index++;
	}
	return (p);
}
