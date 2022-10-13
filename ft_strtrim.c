/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:48:23 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/07 18:46:25 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	found_char(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i[2];
	char	*ret;

	if (!s1 || !set)
		return (0);
	i[0] = 0;
	i[1] = ft_strlen(s1)-1;
	while (found_char(set, s1[i[0]]) && s1[i[0]])
		i[0]++;
	while (found_char(set, s1[i[1]]) && s1[i[1]])
		i[1]--;
	if (!s1[i[0]])
	{
		ret = "";
		return (ret);
	}
	ret = (char *)malloc(sizeof(char) * (i[1] - i[0] + 2));
	if (!ret)
		return (0);
	ft_memcpy(ret, s1 + i[0], i[1] - i[0] + 1);
	ret[i[1] - i[0] + 1] = 0;
	return (ret);
}
