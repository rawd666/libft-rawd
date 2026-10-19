/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:06:24 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/18 12:06:26 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *head = NULL;
    t_list  *new;
    void    *new_content;

    if (!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        new_content = f(lst->content);
        new = ft_lstnew(new_content);
        if(!new)
        {
            if(new_content)
                del(new_content);
            ft_lstclear(&head, del);
            return (NULL);
        }
        ft_lstadd_back(&head, new);
        lst = lst->next;
    }
    return (head);
}

/*void del(void *ptr)
{
    free(ptr);
}

void *to_upper(void *c)
{
    int i;
    const char *ch  = (const char *) c;
    char *new_ch = ft_strdup(ch);
    i = 0;
    while (new_ch[i])
    {
        if (new_ch[i] >= 'a' && new_ch[i] <= 'z')
		    new_ch[i] -= 32;
        i++;
    }
    return (new_ch);
}

int main(){
    t_list *head = NULL;
    t_list *n1 = ft_lstnew(ft_strdup("hello"));
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew(ft_strdup("how"));
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew(ft_strdup("are"));
    ft_lstadd_front(&head, n3);
    t_list *n4 = ft_lstnew(ft_strdup("hi"));
    ft_lstadd_back(&head, n4);
    t_list *count = head;

    while (count)
    {
        printf("%s ", (char *)((count)->content));
        count = count->next;
    }

    t_list *new = ft_lstmap(head, to_upper, del);
    while (new)
    {
        printf("%s ", (char *)((new)->content));
        new = new->next;
    }

    count = head;
    while (count)
    {
        printf("%s ", (char *)((count)->content));
        count = count->next;
    }
}*/