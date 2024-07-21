#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int all_is_printable = 1;
	int index = 0;

	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 32 && *(str + index) <= 126))
		{
			all_is_printable = 0;
			break;
		}

		index++;
	}

	return (all_is_printable);
}

int main(void)
{
	char str[] = "mustafa098765//..??0";
	printf(">>>> %d", ft_str_is_printable(str));
	return (0);
}

// ASCII tablosunda printable karakterler 32 ile 126 arasındaki kodlara sahiptir
// 32 öncesi ESC, Tab benzeri kontrol karakterleri var
// 126 sonrası şapkalı A gibi özel aksanlı harfler var