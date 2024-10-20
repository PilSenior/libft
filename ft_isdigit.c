/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekdemi@student.42kocaeli.com.tr <htek    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:59:48 by htekdemi@st       #+#    #+#             */
/*   Updated: 2024/10/20 15:59:50 by htekdemi@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isdigit(int c){

	if(c >= '0' && c <= '9')
		return(1);
	
	else
		return(0);
}

int main(int ac, char **av){
	if(ac == 2)
		printf("%d", isdigit(**av));
	//char a = 2;
	//printf("%d", isdigit(a));
}