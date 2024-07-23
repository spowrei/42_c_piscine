/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:38:12 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 11:40:31 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	all_alpha;
	int	index;

	all_alpha = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 'a' && *(str + index) <= 'z')
		{
		}
		else if (*(str + index) >= 'A' && *(str + index) <= 'Z')
		{
		}
		else
		{
			all_alpha = 0;
			break ;
		}
		index++;
	}
	return (all_alpha);
}
