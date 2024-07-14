#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = 1;
	while (power>0)
	{
		number *= nb;
		power--;
	}

	return (number);
}



int main()
{
	printf("%d", ft_iterative_power(2,5));

	return 0;
}