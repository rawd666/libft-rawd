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
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return (str + i);
		}
		i--;
	}
	return (NULL);
}

/*#include<stdio.h>
#include <string.h>

int	main(void){
	char s[20] = "heythere";

	printf("%s ", ft_strrchr(s, 'e'));
	printf("%s", strrchr(s, 'e'));
}*/
