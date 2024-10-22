/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi <htekdemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:27:49 by htekdemi          #+#    #+#             */
/*   Updated: 2024/10/22 21:27:49 by htekdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);

    if(c == '\0')
        return(char *)s;
    
    while (i >= 0)
    {
        if(s[i] == (char)c)
            return(char *)(s + i);
        
        i--;
    }
    return('\0');
    
}

int main()
{
    char b[] = "emirhan";
    int a = 'r';
    printf("%s", ft_strrchr(b,a));
}