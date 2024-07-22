#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi_first_part(char *str, int *index)
{
    int i;
    int coefficient;

    i = 0;
    coefficient = 1;
    while (str[i] == '\t' || str[i] == ' ')
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

int ft_atoi(char *str)
{
    int i;
    int coefficient;
    int number;

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

int ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        index++;
    }
    return (index);
}

int ft_base_is_okay(char *base)
{
    int index;
    int index2;

    if (ft_strlen(base) < 2)
        return (0);

    index = 0;
    while (base[index] != '\0')
    {
        if (base[index] == '+' || base[index] == '-')
            return (0);
        index2 = 0;
        while (base[index2] != '\0')
        {
            if (index != index2 && base[index] == base[index2])
                return (0);
            index2++;
        }

        index++;
    }

    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_max;
    int n;

    if (ft_base_is_okay(base) == 0)
        return;
    base_max = ft_strlen(base);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    else if (nbr == 0)
    {
        write(1, &base[0], 1);
        return;
    }
    n = nbr % base_max;
    if (nbr > 0)
    {
        if (nbr / base_max > 0)
            ft_putnbr_base(nbr / base_max, base);
        write(1, &base[n], 1);
    }
}

int ft_atoi_base(char *str, char *base)
{
    if (ft_base_is_okay(base) == 0)
        return (0);

    ft_putnbr_base(ft_atoi(str), base);
}

int main()
{
    printf(ft_atoi_base("   ---12345", "0123456789"));

    return 0;
}