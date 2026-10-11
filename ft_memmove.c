/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:39:09 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/27 15:40:18 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	x = (unsigned char *) src;
	y = (unsigned char *) dest;
	i = 0;
	if (y < x)
	{
		while (i < n)
		{
			y[i] = x[i];
			i++;
		}
	}
	else
		i = n;
	while (i > 0)
	{
		i--;
		y[i] = x[i];
	}
	return (dest);
}

/*#include<string.h>
int main(){
	char c[20] = "welcometo42";

	char *r1 = ft_memmove(c, c + 5, 4);
	char *r2 = memmove(c, c + 5, 4);

	printf("%s ", r1);
	printf("%s", r2);
}*/
