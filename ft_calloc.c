/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:02:38 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/01 17:27:40 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char*	x;
	size_t	i;

	x = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (x == NULL)
		return NULL;
	i = 0;
	while (i < nmemb * size)
	{
		x[i] = '0';
		i++;
	}
	return (x);
}

int main(){
	char *r1 = ft_calloc(5, 1);
	char *r2 = calloc(5, 1);

	printf("%c ", r1[0]);
	printf("%s", r2);

	free(r1);
	free(r2);

	r1 = NULL;
	r2 = NULL;
}
