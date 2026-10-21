/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:02:38 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/19 11:54:01 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*x;
	size_t			max;

	max = -1;
	if (nmemb != 0 && size > max / nmemb)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);
	if (!x)
	{
		return (NULL);
	}
	ft_memset(x, 0, nmemb * size);
	return (x);
}

/*int main(){
	char *r1 = ft_calloc(5, 1);
	char *r2 = calloc(5, 1);

	printf("%c ", r1[0]);
	printf("%s", r2);

	free(r1);
	free(r2);

	r1 = NULL;
	r2 = NULL;
}*/
