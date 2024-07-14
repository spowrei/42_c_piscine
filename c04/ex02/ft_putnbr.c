#include <unistd.h>

void	ft_putnbr(int nb)
{
	char output;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb>10)
	{
		ft_putnbr(nb/10);
	}
	output = '0' + nb % 10;
	write(1, &output, 1);
}

int main()
{
	ft_putnbr(-123456);
	return 0;
}