#include "libft.h"

int main(){
    t_list *head = NULL;
    t_list *n1 = ft_lstnew("hello");
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew("how");
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew("are");
    ft_lstadd_front(&head, n3);

    printf("%s", (char *)(ft_lstlast(head)->content));
    free(n1);
    free(n2);
    free(n3);
}