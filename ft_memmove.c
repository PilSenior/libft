/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:59:54 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 15:59:55 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*r;
	unsigned char	*t;

	r = (unsigned char *)dst;
	t = (unsigned char *)src;
	if (r < t && r < t + len)
	{
		r += len;
		t += len;
		while (len--)
			*(--r) = *(--t);
	}
	else
	{
		while (len--)
			*r++ = *t++;
	}
	return (dst);
}
