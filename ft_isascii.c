#include <stdio.h>

int ft_isascii(int a){

	if(a >= 0 && a <= 127)
		return(1);
	return(0);
}

