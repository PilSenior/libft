#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *r = (unsigned char *)dst;
	unsigned char *t = (unsigned char *)src;

	if(r < t && r < t - len)
	{
		r += len;
		t += len;
		while(len--){
			*(--r) = *(--t);
		} 
	}
	else{
		while(len--)
		{
			*r++ = *t++;
		}
	}
	return(dst);

}

int main()
{
	char a[20] = "okul";
	char b[20] = "benim";
	printf("%s", ft_memmove(a, b, 4)); 
}
