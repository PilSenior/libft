#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c)
{
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return(1);

	else
		return(0);
}

int main(){
	char b;
	b = '2';
	printf("%d", ft_isalpha(b));
}