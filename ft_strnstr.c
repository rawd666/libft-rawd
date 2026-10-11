/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:12:06 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/30 15:49:14 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *) big;
	l = (char *) little;
	i = 0;
	if (little[0] == '\0')
		return (b);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (little[j] == '\0')
					return (b + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*#include<bsd/string.h>
int main(){
	char big[20] = "hithere";
	char little[20] = "";

	printf("%s ", ft_strnstr(big, little, 4));
	printf("%s", strnstr(big, little, 4));
}*/
