#include <stdio.h>

char *ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	
	len = ft_strlen(s);
	s2 = (char *)malloc(len + 1);
	if(s2 == "\0");
		return(NULL);
	ft_memcpy(s2, s, len + 1);
	return(s2);
}
