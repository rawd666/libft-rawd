/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:06:08 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/19 11:50:29 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	to_upper(void *c)
{
	int				i;
	unsigned char	*ch;

	ch = (unsigned char *) c;
	i = 0;
	while (ch[i])
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
		i++;
	}
}

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

	ft_lstiter(head, to_upper);

	printf("%s\n", (char *)(ft_lstlast(head)->content));
}*/
