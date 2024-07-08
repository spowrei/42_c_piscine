#include <unistd.h>

void ft_is_negative(int n){

	char n_or_p = 'x';
	if (n > 0){
		n_or_p='P';

}
else if (n<0){
n_or_p = 'N';
}
write(1,&n_or_p,1);
}

int main(void){
ft_is_negative(3);
return 0;
}
