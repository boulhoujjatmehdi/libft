#include "libft.h"
int main(){

t_list *createdd = ft_lstnew("characters from another planet");
printf("createdd address  : %p\n", createdd);
printf("createdd s_list content is   : %s\n", createdd->content);
printf("createdd s_list nenxt is   : %p\n", createdd->next);
}