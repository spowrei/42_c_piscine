#include <unistd.h> 
#include <stdio.h>


int 	ft_str_is_numeric(char *str)
{
	int all_numeric = 1;
	int index = 0;

	while (*(str+index)!='\0')
	{
		if(!(*(str+index)>='0' && *(str+index)<='9')) 
		{
			all_numeric =0;
			break;	
		}

		index++;
	}

	return (all_numeric);
}

int main(void)
{
	printf(">>>> %d",ft_str_is_numeric("0987654321"));
    return (0);
}
