/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:50:00 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/30 18:11:33 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	if (nptr[0] == '-')
	{
		sign *= -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '1' && nptr[i] <= '9')
	{
		j = (j * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * j);
}

/*#include<stdio.h>
#include<stdlib.h>
int main(){
	char c[20] = "214748364";

	printf("%d ", ft_atoi(c));
	printf("%d", atoi(c));
}*/
