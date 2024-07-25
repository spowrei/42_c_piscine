/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:38:52 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/23 15:18:55 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	number;

	number = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else if (power > 1)
		number *= ft_recursive_power(nb, power - 1);
	return (number);
}
