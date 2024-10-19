#include <stdio.h>

size_t ft_strlen(const char *s)
{

	size_t a = 0;
	while(s[a] != '\0' )
	{
		a++;
	}
	return(a);
}
