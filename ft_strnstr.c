/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:28:21 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/12 17:57:51 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    int j;
    if(!len && !haystack)
        return 0;
    if (needle[0] ==0 )
        return (char *)haystack;
    while (haystack[i] && i < (int)len)
    {
        j = 0;
        while(haystack[i+j] == needle[j] && i + j < (int)len )
        {
            if(needle[j+1]== 0)
                return (char *)haystack+i;
            j++;       
        }
        i++;        
    }
    return 0;
}