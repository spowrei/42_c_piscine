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
