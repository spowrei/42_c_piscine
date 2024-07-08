#include <unistd.h> 
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int all_alpha =1;
	int index =0;

	while (*(str+index)!='\0')
	{
		if(*(str+index)>='a' && *(str+index)<='z') {}
		else if(*(str+index)>='A' && *(str+index)<='Z') {}
		else 
		{
			all_alpha=0;
			break;	
		}

		index++;
	}

	return (all_alpha);
}

int main(void)
{
	printf(">>>> %d",ft_str_is_alpha("azAZ."));
    return (0);
}
