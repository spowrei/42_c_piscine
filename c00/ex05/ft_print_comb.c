/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mkaplan2005@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:06:06 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/08 19:40:33 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void){
char units='2';
char tens='1';
char hundreds='0';

while(hundreds<='9')
{
    while(tens<='9')
    {
        while(units<='9')
        {
            if(units>tens && tens>hundreds )
            {
            
                write(1, &hundreds, 1);
            	write(1, &tens, 1);   
                write(1, &units, 1);
                write(1, ", ", 1);
            }
            units++;
        }
        units=0;
        tens++;
        }
    tens=0;
    hundreds++;
    }
	
}

int main(void){

ft_print_comb();
}
