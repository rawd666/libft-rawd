/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:50:18 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/12 17:28:16 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;
	long	nb;

	nb = n;
	i = len(nb);
	c = malloc((i + 1) * sizeof(char));
	if (!c)
		return (NULL);
	if (nb == 0)
		c[0] = '0';
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	c[i] = '\0';
	i--;
	while (nb != 0)
	{
		c[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (c);
}
/**
int main(){
	printf("%s", ft_itoa(-256));
}
*/