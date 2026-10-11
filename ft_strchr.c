/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:12:00 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/29 17:27:46 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (NULL);
}

/*#include<stdio.h>
#include<string.h>
int main(){
	char s[20] = "heythere";

	printf("%s1 ", ft_strchr(s, '1'));
	printf("%s2 ", strchr(s, '1'));
}*/
