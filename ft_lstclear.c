/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:37:51 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/18 12:05:48 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	del(void *ptr)
{
	free(ptr);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
int	main(void){
	t_list *head = NULL;
	t_list *n1 = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_front(&head, n1);
	t_list *n2 = ft_lstnew(ft_strdup("how"));
	ft_lstadd_front(&head, n2);
	t_list *n3 = ft_lstnew(ft_strdup("are"));
	ft_lstadd_front(&head, n3);
	t_list *n4 = ft_lstnew(ft_strdup("hi"));
	ft_lstadd_back(&head, n4);

	printf("%s\n", (char *)(ft_lstlast(head)->content));

	ft_lstclear(&head, del);

	printf("%s\n", (char *)(ft_lstlast(head)->content));
}
*/