/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:59:56 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 15:59:57 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *ptr, int value, int num) {
    unsigned char *p = (unsigned char *)ptr;
    while (num--) {
        *p++ = value;
    }
    return(ptr);
}
