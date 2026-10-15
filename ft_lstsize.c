/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:41:59 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/15 14:16:16 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(){
    t_list *head = NULL;
    t_list *n1 = ft_lstnew("hello");
    ft_lstadd_front(&head, n1);
    t_list *n2 = ft_lstnew("how");
    ft_lstadd_front(&head, n2);
    t_list *n3 = ft_lstnew("are");
    ft_lstadd_front(&head, n3);

    printf("%u", ft_lstsize(head));
    free(n1);
    free(n2);
    free(n3);
}*/
