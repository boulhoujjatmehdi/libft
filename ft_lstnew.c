/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:40:24 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/18 13:13:05 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newTlist;

	newTlist = (t_list *)malloc(sizeof(t_list));
	if (!newTlist)
		return (0);
	newTlist->content = content;
	newTlist->next = NULL;
	return (newTlist);
}
