#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int number;

	number = nb;
	if (power > 1)
		number *= ft_recursive_power(nb, power - 1);
	else if (nb == 0 && power == 0)
		return (1);

	return (number);
}

int main()
{
	printf("%d", ft_recursive_power(0, 0));

	return 0;
}