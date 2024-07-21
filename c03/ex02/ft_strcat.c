/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:45:38 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/20 16:48:16 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (*(dest + index) != '\0')
	{
		index++;
	}
	while (*(src + index2) != '\0')
	{
		*(dest + index) = *(src + index2);
		index++;
		index2++;
	}
	*(dest + index) = '\0';
	return (dest);
}
