#include <stdio.h>

void *ft_memset(void *ptr, int value, int num) {
    unsigned char *p = (unsigned char *)ptr;
    while (num--) {
        *p++ = value;
    }
    return(ptr);
}

int main()
{
	char a[] = "emirhan";
	printf("%s", ft_memset(a, '0', 3));
}