#include "libft.h"

int main(){
    _list *head = NULL;
    t_list *n1 = ft_lstnew("hello");
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew("how");
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew("are");
    ft_lstadd_front(&head, n3);
    t_list *n4 = ft_lstnew("hi");
    ft_lstadd_back(&head, n4);

    printf("%s\n", (char *)(ft_lstlast(head)->content));

    ft_lstdelone(n4, del());

    printf("%s\n", (char *)(ft_lstlast(head)->content));

    free(n1);
    free(n2);
    free(n3);
    free(n4);
}