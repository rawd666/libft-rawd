/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:38:16 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/11 12:01:21 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	str1 = (char *) s;
	str2 = malloc((ft_strlen(str1) + 1) * sizeof(char));
	if (!str1 || !str2)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
    str2[i] = '\0';
	return (str2);
}

/*#include <string.h>
int main(){
    const char *s = "hello";
    printf("%s", ft_strdup(s));
	printf(" %s", strdup(s));
}*/
