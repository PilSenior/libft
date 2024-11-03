/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi <htekdemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:43:30 by htekdemi          #+#    #+#             */
/*   Updated: 2024/10/24 21:43:30 by htekdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i = 0;
    size_t len_n = ft_strlen(needle);

    if (len_n == 0) {
        return (char *)haystack; // Eğer needle boşsa, haystack döndür
    }
    if (len == 0) {
        return NULL; // Eğer len 0 ise, NULL döndür
    }
    
    while (i <= len - len_n && haystack[i] != '\0') {
        // Eşleşme kontrolü
        if (ft_strncmp(&haystack[i], needle, len_n) == 0) {
            return (char *)&haystack[i]; // Eşleşme bulundu
        }
        i++; // İterasyonu artır
    }
    
    return NULL; // Eşleşme bulunamadı
}


