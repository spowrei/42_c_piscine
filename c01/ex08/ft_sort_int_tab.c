/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:28:31 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/14 19:52:17 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index < size - 1)
	{
		if (*(tab + index) > *(tab + index + 1))
		{
			temp = *(tab + index);
			*(tab + index) = *(tab + index + 1);
			*(tab + index + 1) = temp;
			index = 0;
		}
		else
		{
			index++;
		}
	}
}
