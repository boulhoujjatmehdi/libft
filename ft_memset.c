/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:47:57 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/05 13:39:06 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *b , int c , unsigned int len)
{
	int l = 0;
	while (l < (int)len)
	{
		((char *)b)[l] = c;
		l++;
	}
	return b;
}

