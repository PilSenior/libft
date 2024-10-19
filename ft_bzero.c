#include <stdio.h>
#include <string.h>

 void *ft_bzero(void *s, size_t n)
 {
	unsigned char *p = (unsigned char *)s;
	while(n--)
	{
		*p++ = '0';
	}
	return(s);
 }

 int main()
 {
	char a[] = "emirhan";
	printf("%s", ft_bzero(a, 4));
 }