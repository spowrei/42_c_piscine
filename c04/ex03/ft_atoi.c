/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:40:42 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/22 16:51:16 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_first_part(char *str, int *index)
{
	int	i;
	int	coefficient;

	i = 0;
	coefficient = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			coefficient *= -1;
		i++;
	}
	*index = i;
	return (coefficient);
}

int	ft_atoi(char *str)
{
	int	i;
	int	coefficient;
	int	number;

	number = 0;
	coefficient = ft_atoi_first_part(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number * coefficient);
}
