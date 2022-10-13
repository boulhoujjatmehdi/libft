/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:19:26 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/07 17:46:44 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;

	if ((!dest && !src) || !n)
		return (dest);
	if (dest < src)
		ft_memcpy (dest, src, n);
	else
	{
		n_dest = (unsigned char *)dest;
		n_src = (unsigned char *)src;
		while (n--)
			n_dest[n] = n_src[n];
	}
	return (dest);
}
