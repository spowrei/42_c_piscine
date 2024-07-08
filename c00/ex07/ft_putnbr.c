#include <unistd.h> // 48 = 0  // 57 b= 9
#include <stdio.h> // !!!!!!!! negatif sayılar için düzenleeeee!!!

void ft_putnbr(int nb)
{
	int reversed_nb=0;
	int temp = nb;
	char output = 48;

	while(temp>=1)
	{
		reversed_nb+=temp%10;
		reversed_nb*=10;
		temp/=10;
	}
	reversed_nb/=10;

	while (reversed_nb>=1)
	{
		output = 48;
		output += reversed_nb%10;
		write(1,&output,1);
		reversed_nb/=10;
	}
	

}

int main(void)
{
	ft_putnbr(205678);


return (0);
}

// 48 + rakamın gerçek değeri = rakamın ascii değeri