/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:25:58 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/23 15:34:20 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int main(){
	int x;

	x = 'a';

	printf("%d ", ft_isdigit(x));
	printf("%d", isdigit(x));
}*/
