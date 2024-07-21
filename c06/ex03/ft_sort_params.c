/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 23:25:13 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/21 23:25:13 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void ft_sort(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc-1)
	{
		if(ft_strcmp(argv[i],argv[i+1]) > 0)
		{
			ft_strswap(&argv[i], &argv[i+1]);
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return 0;
}