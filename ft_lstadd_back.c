/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:09:48 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/16 17:38:55 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

/*int main(){
    t_list *head = NULL;
    t_list *n1 = ft_lstnew("hello");
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew("how");
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew("are");
    ft_lstadd_front(&head, n3);
    t_list *n4 = ft_lstnew("hi");
    ft_lstadd_back(&head, n4);

    printf("%s", (char *)(ft_lstlast(head)->content));

    free(n1);
    free(n2);
    free(n3);
    free(n4);
}*/
