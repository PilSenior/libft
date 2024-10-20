/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ısalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:00:05 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 16:00:55 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

int main()
{
	char b;
	b = '2';
	printf("%d", ft_isalpha(b));
}