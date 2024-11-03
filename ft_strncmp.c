/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi <htekdemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:04:33 by htekdemi          #+#    #+#             */
/*   Updated: 2024/10/23 00:04:33 by htekdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, long unsigned int n)
{
    while (n > 0) {
        // Eğer dizilerden biri sonuna gelmişse veya karakterler eşit değilse
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
        // Karakterler eşitse ve son karaktere ulaşılmadıysa
        if (*s1 == '\0') {
            return 0; // İki dizi eşittir
        }
        s1++;
        s2++;
        n--;
    }
    return 0; // İlk n karakter eşit
}