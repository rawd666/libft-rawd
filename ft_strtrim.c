/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 13:30:20 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/11 18:09:26 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen((char *)(s1));
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str = ft_substr(s1, i, j - i);
	return (str);
}

/*int main(){
	printf("%s", ft_strtrim("this ia test this", "this"));
}*/
