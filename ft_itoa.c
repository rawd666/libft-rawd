/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:50:18 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/08 15:28:27 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*c;
	int	i;
	int	num;

	i = 0;
	num = n;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	c = malloc(i * sizeof(char));
	while (i > 0)
	{
		c[i] = (char)(n % 10);
		n = n / 10;
		i--;
	}
	return c;
}

int main(){
	printf("%s", ft_itoa(256));
}
