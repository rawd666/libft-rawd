/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:21:15 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/30 14:52:11 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	unsigned char	y;
	size_t			i;

	x = (unsigned char *) s;
	y = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (x[i] == y)
			return (x + i);
		i++;
	}
	return (NULL);
}

/*#include<string.h>
int main(){
	char s[20] = "274523597";

	char *r1 = ft_memchr(s, '8', 7);
	char *r2 = memchr(s, '8', 7);

	printf("%s ", r1);
	printf("%s", r2);
}*/
