/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:41:41 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/27 16:43:51 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	if (size <= 0)
	{
		return (l);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

/*#include<bsd/string.h>
int main(){
	char dst[20] = "welcomehereto42";
	char src[20] = "hellofrom42";

	char dst1[20] = "welcomehereto42";
	char src1[20] = "hellofrom42";

	printf("%zu ", ft_strlcpy(dst, src, 0));
	printf("%zu ", strlcpy(dst1, src1, 0));
}*/
