/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 11:52:36 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/11 13:29:38 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size1;
	int		size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, size1);
	ft_memcpy(str + size1, s2, size2 + 1);
	return (str);
}

/*int main(){
	char *s1 = "hello ";
	char *s2 = "there";
	printf("%s", ft_strjoin(s1, s2));
}*/
