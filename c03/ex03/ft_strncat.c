/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:46:20 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/20 16:47:56 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	while (*(dest + index) != '\0')
	{
		index++;
	}
	while (*(src + index2) != '\0' && index2 < nb)
	{
		*(dest + index) = *(src + index2);
		index++;
		index2++;
	}
	*(dest + index) = '\0';
	return (dest);
}
