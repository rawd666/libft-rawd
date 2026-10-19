/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:45:05 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/29 16:58:19 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	while (dst[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size >= d)
	{
		i = 0;
		while (i + d < size - 1 && src[i] != '\0')
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
		return (d + s);
	}
	return (s + size);
}

/*#include<bsd/string.h>
int	main(void){
	char dst[20] = "welcome";
	char src[20] = "";

	char dst1[20] = "welcome";
	char src1[20] = "";

	printf("%zu ", ft_strlcat(dst, src, 20));
	printf("%zu ", strlcat(dst1, src1, 20));
	printf("\ndst : %s\n",dst);
	printf("dst1: %s\n",dst1);
}*/
