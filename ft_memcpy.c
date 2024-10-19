#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t v = 0;
	unsigned char *r = (unsigned char *)src;
	unsigned char *y = (unsigned char *)dst;
	while(v < n)
	{
		y[v] = r[v];
		v++;
	}
	return(dst);
}
int main()
{
	char a[] = "emirhan";
	char b[20] = "hayri";
	printf("%s", ft_memcpy(a, b, 3));
}