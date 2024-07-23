/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:43:23 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 15:48:51 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (index == 0 && is_low(*(str + index)) == 1)
		{
			*(str + index) -= 32;
		}
		else if (is_num(*(str + index)) == 0 && is_up(*(str + index)) == 0
			&& is_low(*(str + index)) == 0 && is_low(*(str + index + 1)) == 1)
		{
			*(str + index + 1) -= 32;
		}
		index++;
	}
	return (str);
}
