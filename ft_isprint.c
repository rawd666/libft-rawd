/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:59:27 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/23 16:15:28 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*#include<ctype.h>
#include<stdio.h>
int main(){
	int x;

	x = 127;

	printf("%d ", ft_isprint(x));
	printf("%d", isprint(x));
}*/
