/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:51:30 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/31 14:14:58 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		write(fd, &s[len], 1);
		if (s[len + 1] == '\0')
			write(fd, "\n", 1);
		len++;
	}
}
