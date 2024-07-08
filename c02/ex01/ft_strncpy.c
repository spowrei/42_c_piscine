#include <unistd.h> // strcpy --> 1,2,3,4,5,\0,\0,\0   dizinin geri kalanını null karakterle doldurmalı??

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	// index sınıra gelmediyse ve kaynak stringin sonuna gelinmediyse
	while (i < n && src[i] != '\0')
	{
		*(dest+i)=*(src+i);
		i++;
	}

	// kaynak string bittikten sonra hedef klasör istenilen yere kadar null karakter doldurulurs
	while (i < n)
    {
        dest[i] = '\0';
        i++;
    }


	return dest;
}

int main(void)
{
	char *isim = "mustafa kaplan";
	char kal[30];

	ft_strncpy(kal,isim,25);
	write(1,kal,30);

    return (0);
}
