#include <stdio.h>

void decimal_to_hexadecimal(int decimal)
{
    char hexadecimal[3];
    int unit = decimal % 16;
    hexadecimal[0] = '0' + (decimal / 16);

    if(unit == 10) hexadecimal[1] = 'a';
    else if(unit == 11) hexadecimal[1] = 'b';
    else if(unit == 12) hexadecimal[1] = 'c';
    else if(unit == 13) hexadecimal[1] = 'd';
    else if(unit == 14) hexadecimal[1] = 'e';
    else if(unit == 15) hexadecimal[1] = 'f';
    else hexadecimal[1] = '0' + (unit);
    write(1,&hexadecimal[0],1);
    write(1,&hexadecimal[1],1);
}

void ft_putstr_non_printable(char *str)
{
    int index;
    
    index = 0;
    while (*(str+index)!='\0')
    {
        if(*(str+index)<32)
        {
            write(1,"\\",1);
            decimal_to_hexadecimal(*(str+index));
        }
        else 
        {
            write(1,&*(str+index),1);
        }

        index++;
    }
}

int main()
{
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    

    return 0;
}