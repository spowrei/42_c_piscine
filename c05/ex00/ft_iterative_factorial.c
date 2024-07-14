#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int number;
	
	number = 1;

	if (nb < 0)
	{
		return (0);
	}
	

	while (nb>1)
	{
		number*=nb;
	
		nb--;
	}

	return (number);
}


int main()
{
	printf("%d",ft_iterative_factorial(5));

	return 0;
}