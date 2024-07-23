/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:04:13 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:18 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	all_is_lower;
	int	index;

	all_is_lower = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 'a' && *(str + index) <= 'z'))
		{
			all_is_lower = 0;
			break ;
		}
		index++;
	}
	return (all_is_lower);
}
