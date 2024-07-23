/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:41:57 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 15:47:47 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	index;

	index = 0;
	while (*(src + index) != '\0' && index < size - 1)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + size - 1) = '\0';
	return (index);
}
