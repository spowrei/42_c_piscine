/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mkaplan2005@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:57:21 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/08 14:46:44 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //s1-s2
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index =0;

	while (*(s1 + index) != '\0' && *(s2 + index) != '\0' && index < n)
	{
		if	(*(s1 + index) != *(s2 + index))
		{
			return (*(s1 + index) - *(s2 + index));
		}

		index++;
		
	}

	index--;
	
	return (*(s1 + index) - *(s2 + index));
}

int main(void)
{
	printf("%d",ft_strncmp("abcd","abc",3));
    return (0);
}
