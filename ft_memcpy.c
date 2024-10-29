/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:59:53 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 15:59:54 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			v;
	unsigned char	*r;
	unsigned char	*y;

	v = 0;
	r = (unsigned char *)src;
	y = (unsigned char *)dst;
	while (v < n)
	{
		y[v] = r[v];
		v++;
	}
	return (dst);
}
