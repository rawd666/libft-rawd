/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:28:41 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/29 17:33:15 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return ((char *)(s + i));
}

/*#include<stdio.h>
#include <string.h>

int	main(void){
	char s[20] = "heythere";

	printf("%s ", ft_strrchr(s, 'e'));
	printf("%s", strrchr(s, 'e'));
}*/
