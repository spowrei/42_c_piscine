/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:31:17 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/24 01:31:17 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*p;

	p = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		p[index] = src[index];
		index++;
	}
	p[index] = src[index];
	return (p);
}
