#include <stdio.h>

int isdigit(int c){

	if(c >= '0' && c <= '9')
		return(1);
	
	else
		return(0);
}

int main(int ac, char **av){
	if(ac == 2)
		printf("%d", isdigit(**av));
	//char a = 2;
	//printf("%d", isdigit(a));
}