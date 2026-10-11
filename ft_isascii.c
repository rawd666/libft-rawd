/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:51:36 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/23 15:57:54 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0);
	}
	return (1);
}

/*#include<ctype.h>
#include<stdio.h>
int main(){
	int x;

	x = -1;

	printf("%d ", ft_isascii(x));
	printf("%d", isascii(x));
}*/
