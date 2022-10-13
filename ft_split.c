/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:47:04 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/11 16:46:48 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_of_strings(const char *s, char c, int *location)
{
	int	i[3];
	int	nb;

	i[0] = 0;
	i[2] = 0;
	nb = 0;
	while (s[i[0]])
	{
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		i[1] = 0;
		while (s[i[0] + i[1]] && s[i[0] + i[1]] != c)
			i[1]++;
		if (i[1])
		{
			location[i[2]++] = i[0];
			location[i[2]++] = i[0] + i[1];
			nb++;
		}
		i[0] += i[1];
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb;
	int		*location;
	char	**ret;

	if (!s)
		return (0);
	location = (int *)malloc(sizeof(int) * (ft_strlen(s)));
	if (!location)
		return (0);
	nb = nb_of_strings(s, c, location);
	ret = (char **)ft_calloc (nb + 1, sizeof(char *));
	if (!ret || !location)
		return (0);
	i = 0;
	location[nb * 2 + 1] = location[i + 1] - location[i];
	while (i < nb * 2)
	{
		ret[i / 2] = (char *)ft_calloc((location[nb * 2 + 1] + 1), sizeof(char));
		if (!ret[i / 2])
			return (NULL);
		ft_memcpy (ret[i / 2], s + location[i], location[i + 1] - location[i]);
		i += 2;
	}
	return (ret);
}
