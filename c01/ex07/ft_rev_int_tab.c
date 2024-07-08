#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int index=size-1;

	while (index >= size/2 )
	{
		temp=*(tab+index);
		*(tab+index)=*(tab+size -index-1);
		*(tab+size -index-1)=temp;
		
		index--;
	}
}

int main(void)
{
	int k[]={1,2,3,4,5,6,7,8,9};
	int size = 9;
	ft_rev_int_tab(k,size);

for (int i = 0; i < size; i++)
{
	printf("%d",k[i]);
}

	
    return (0);
}
