/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:59:46 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 15:59:47 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int a){

	if(a >= 0 && a <= 127)
		return(1);
	return(0);
}

