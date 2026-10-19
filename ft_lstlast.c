/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:16:40 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/16 16:09:11 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}

/*int main(){
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
}*/
