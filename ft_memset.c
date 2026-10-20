/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:51:12 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/24 16:04:29 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*x;
	unsigned char	c2;
	int				i;

	x = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		x[i] = c2;
		i++;
	}
	return (s);
}

/*#include<string.h>
#include <stdio.h>

int	main(void){
	char y[2] = "kf";
	char z[2] = "kf";
	char *r1 =ft_memset(y, '2', 5);
	char *r2 = memset(z, '2', 5);
	printf("%s ",r1);
	printf("%s",r2 );
}*/
