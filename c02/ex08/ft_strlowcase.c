/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:55:51 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 15:43:45 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 'A' && *(str + index) <= 'Z')
		{
			*(str + index) += 32;
		}
		index++;
	}
	return (str);
}
