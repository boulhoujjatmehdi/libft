/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:19:17 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/17 12:23:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    printf("\nlst before : %p \t new before : %p\n" , *lst , new);
    new->next = *lst;
    *lst = new;
    printf("lst after : %p \t and new after : %p\n" , *lst , new->next);
}p