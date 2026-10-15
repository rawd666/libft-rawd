/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:58:11 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/15 13:41:11 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(){
    t_list *head = NULL;
    t_list *n1 = ft_lstnew("hello");
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew("how");
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew("are");
    ft_lstadd_front(&head, n3);
    t_list *tmp = head;

    while(tmp)
    {
        printf("%s ", (char *)tmp->content);
        tmp = tmp->next;
    }
    
    free(n1);
    free(n2);
    free(n3);
}*/
