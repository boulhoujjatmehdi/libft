/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:48:59 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/13 19:11:00 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    int	i;
	char *str;
	
	if( !s || !(str = (char *)malloc(len+1)))
		return 0;
	if (start > ft_strlen(s))
		return str;
	i = 0;
	ft_strlcpy( str, s+start, len+1);
	return (str);
}


// int main(){
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	// char	*strsub;

// 	// char *bullshit;

// 			puts(ft_substr(str, 400, 20));
// 		// else
// 		// {
// 		// 	bullshit = (char *)&strsub[30];
// 		// 	bullshit = "FULL BULLSHIT";
// 		// 	if (strsub)
// 		// 		puts(strsub);
// 		// 	else
// 		// 		puts("rip");
// 		// }
// 		// if (str == strsub)
// 		// 	puts("\nA new string was not returned");
// 		// (void)bullshit;
		
// }