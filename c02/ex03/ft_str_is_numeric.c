/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:02:47 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 13:03:10 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	all_numeric;
	int	index;

	all_numeric = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= '0' && *(str + index) <= '9'))
		{
			all_numeric = 0;
			break ;
		}
		index++;
	}
	return (all_numeric);
}
