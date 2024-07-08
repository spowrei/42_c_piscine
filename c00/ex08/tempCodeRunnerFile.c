#include <unistd.h>

void  ft_print_combn(int n)
{
	char c = '0' + n/10;

		
	while(c<='9')
	{
		write(1,&c,1);
		if (n%10>1){ft_print_combn(10+n-1);}
		write(1,", ",2);
		c++;
	}
	
}

int main (void)
{
	ft_print_combn(2);


	return (0);
}

// +10 eklentisi ile ilk basamak 0 2. basamak 10