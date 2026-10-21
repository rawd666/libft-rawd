/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:12:16 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/12 15:44:13 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	free_words(char **strstr, size_t j)
{
	while (j--)
		free(strstr[j]);
	free(strstr);
	return ;
}

static void	split_words(char *str, char **strstr, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			start = i;
		if (str[i] != c && ((str[i + 1]) == '\0' || (str[i + 1]) == c))
		{
			strstr[j] = ft_substr(str, start, (i - start + 1));
			if (!strstr[j])
				free_words(strstr, j);
			j++;
		}
		i++;
	}
	strstr[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strstr;

	if (!s)
		return (NULL);
	str = (char *)s;
	strstr = malloc((count_words(str, c) + 1) * sizeof(char *));
	if (strstr == NULL)
		return (NULL);
	split_words(str, strstr, c);
	return (strstr);
}

/*int main(){
	char c = ' ';
	int i;

	char **str = ft_split("chinimala", c);
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
}*/
