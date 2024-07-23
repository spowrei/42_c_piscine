/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:05:45 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 15:42:51 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	all_is_upper;
	int	index;

	all_is_upper = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 'A' && *(str + index) <= 'Z'))
		{
			all_is_upper = 0;
			break ;
		}
		index++;
	}
	return (all_is_upper);
}
