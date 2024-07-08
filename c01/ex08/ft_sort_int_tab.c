#include <unistd.h>
#include <stdio.h>


void  ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int index=0;

	while (index<size-1)
	{
		if (*(tab+index) > *(tab+index+1))
		{
			temp=*(tab+index);
			*(tab+index)=*(tab+index+1);
			*(tab+index+1)=temp;

			index =0;
		}
		else 
		{
			index++;
		}

	}
}

int main(void)
{
	int k[]={5,4,2,3,7,8,9,1,5};
	int size = 9;
	ft_sort_int_tab(k,size);

for (int i = 0; i < size; i++)
{
	printf("%d",k[i]);
}


    return (0);
}
