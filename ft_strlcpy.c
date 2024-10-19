#include <stdio.h>
#include "libft.h"

 size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
 {
	size_t n = 0;
	if(dstsize != '\0')
	{
		while(n != '\0' && n < (dstsize - 1))
		{
		dst[n] = src[n];
		n++;
		}
		dst[n] = '\0';
	}
	return();

 }

 int main()
 {
	char a[] = "hello world";
	char b[20] = "emşr";
	printf("%zu", ft_strlcpy(b, a, 10));
 }

