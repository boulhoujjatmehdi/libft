/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:21:02 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/18 18:05:22 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*t2;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		t2 = temp;
		temp = temp->next;
		ft_lstdelone(t2, del);
	}
	*lst = NULL;
}
