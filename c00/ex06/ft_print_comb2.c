#include <unistd.h>

void ft_print_comb2(void)
{
	char numb1_tens= '0';
	char numb1_units='0';
	char numb2_tens= '0';
	char numb2_units='1';

	while (numb1_tens<='9')
	{
		while (numb1_units<='9')
		{
			//////////
			while (numb2_tens<='9')
			{
				while (numb2_units<='9')
				{
					if (numb2_tens>numb1_tens)
					{
						write(1,&numb1_tens,1);
						write(1,&numb1_units,1);
						write (1," ",1);
						write(1,&numb2_tens,1);
						write(1,&numb2_units,1);
						write(1,", ",2);
					}
					
					else if (numb2_tens==numb1_tens && numb2_units>numb1_units)
					{
						write(1,&numb1_tens,1);
						write(1,&numb1_units,1);
						write (1," ",1);
						write(1,&numb2_tens,1);
						write(1,&numb2_units,1);
						write(1,", ",2);
					}
				
					numb2_units++;	
				}
				numb2_units='0';
				numb2_tens++;
			}
			numb2_tens=numb1_tens;




			numb1_units++;	
		}
		numb1_units='0';
		numb1_tens++;
	}

}

int main(void)
{
ft_print_comb2();

	return (0);
}