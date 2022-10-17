/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:43:41 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/15 15:16:34 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c , size_t n){
    int i = 0;
    while(((char *)s)[i] != c && i < (int)n){
        i++;
        if( i == (int)n)
            return 0;
    }
    return ((void *)s+i);
}



