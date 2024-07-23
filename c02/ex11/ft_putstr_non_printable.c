/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putstr_non_printable.c						  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mukaplan <mukaplan@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/07/15 15:48:01 by mukaplan		  #+#	#+#			 */
/*   Updated: 2024/07/15 15:48:03 by mukaplan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	decimal_to_hexadecimal(int decimal)
{
	char	hexadecimal1;
	char	hexadecimal2;

	hexadecimal1 = '0' + (decimal / 16);
	if (decimal % 16 == 10)
		hexadecimal2 = 'a';
	else if (decimal % 16 == 11)
		hexadecimal2 = 'b';
	else if (decimal % 16 == 12)
		hexadecimal2 = 'c';
	else if (decimal % 16 == 13)
		hexadecimal2 = 'd';
	else if (decimal % 16 == 14)
		hexadecimal2 = 'e';
	else if (decimal % 16 == 15)
		hexadecimal2 = 'f';
	else
		hexadecimal2 = '0' + (decimal % 16);
	write(1, &hexadecimal1, 1);
	write(1, &hexadecimal2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) < 32)
		{
			write(1, "\\", 1);
			decimal_to_hexadecimal(*(str + index));
		}
		else
		{
			write(1, &*(str + index), 1);
		}
		index++;
	}
}
