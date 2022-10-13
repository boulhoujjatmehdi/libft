/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:56:30 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/06 17:39:07 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{

    int size = ft_strlen(s1)+1;
    char *str;
    if(!(str = (char *)malloc(size)))
        return NULL;
    ft_strlcpy(str , s1 , size);
    return str;
    
}