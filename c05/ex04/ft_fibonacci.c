#include <stdio.h>

// 0 1 1 2 3 5 8 13 21   değer
// 0 1 2 3 5 6 7 8  9    index
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	printf("%i", ft_fibonacci(7));
}
