/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:12:16 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/08 14:50:00 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countWords(char *str, char c)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i] !== c)
			break;
	}
	while (str[i])
	{
		if (str[i - 1] == c)
		{
			i++;
			continue;
		}
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int	arraySize(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
}

char	**ft_split(char const *s, char c)
{
	char **str;
	size_t i;
	size_t j;

	str = (char **)malloc(countWords(s, c) * sizeof(char *));
	i = 0;
	while (i < countWords(s, c))
	{
		
	}
	str[0] = (char *)malloc(i + 1* sizeof(char));
	str[1] = (char *)malloc((strlen(s) - i + 1) * sizeof(char *));
	if (str == NULL || str[0] == NULL || str[1] == NULL)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		if (j < i)
			str[0] = s[j];
		else
			str[1] = s[j];
	}
	str[0][j] = '\0';
	str[1][j] = '\0';
	return (str);
}
