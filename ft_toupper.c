/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:00:03 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 18:09:21 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 32);
		
	return(c);
}

int main()
{
	printf("%d", ft_toupper('b'));
}