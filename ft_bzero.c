/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:06:38 by rawabdal          #+#    #+#             */
/*   Updated: 2026/09/24 16:32:45 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	unsigned char	*x;
	int				i;

	x = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}

/*#include<stdio.h>
#include<strings.h>
int main(){
	char a[4] = "sjdg";
	char b[4] = "sjdg";

	ft_bzero(a, 3);
	bzero(b, 3);

	printf("%c ", a[3]);
	printf("%c", b[3]);
}*/
