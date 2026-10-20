/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:33:50 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/24 17:04:37 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned char	*x;
	unsigned char	*y;
	int				i;

	if (!dest && !src)
		return (NULL);
	x = (unsigned char *)src;
	y = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		y[i] = x[i];
		i++;
	}
	return (dest);
}

/*#include<string.h>
#include <stdio.h>

int	main(void){
	char a[5] = "hwtfd";
	char b[5] = "srjwp";
	char c[5] = "hwtfd";
	char d[5] = "srjwp";

	char *r1 = ft_memcpy(b, a, 4);
	char *r2 = memcpy(d, c, 4);

	printf("%s ", r1);
	printf("%s", r2);
}*/
