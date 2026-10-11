/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:53:19 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/30 15:10:37 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;
	int				j;
	int				k;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	j = 0;
	k = 0;
	while (i < n)
	{
		j += a[i];
		k += b[i];
		i++;
	}
	return (j - k);
}

/*#include<string.h>
int main(){
	char a[20] = "abcdefg";
	char b[20] = "abcdefh";

	printf("%d ", ft_memcmp(a, b, 8));
	printf("%d", memcmp(a, b, 8));
}*/
