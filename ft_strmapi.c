/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:30:01 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/14 13:13:21 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen((char *)s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	to_upper(unsigned int i, char c)
{
    (void)i;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int main(){
    char const *s = "hello";
    printf("%s", ft_strmapi(s, to_upper));
}*/
