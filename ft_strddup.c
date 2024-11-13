/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:04:18 by htekdemi          #+#    #+#             */
/*   Updated: 2024/11/13 14:04:18 by htekdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s);
	s2 = (char *)malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s, len + 1);
	return (s2);
}
