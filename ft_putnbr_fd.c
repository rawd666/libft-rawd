/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:16 by rawabdal          #+#    #+#             */
/*   Updated: 2026/10/14 17:00:38 by rawabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	i;

	i = n;
	if (fd < 0)
	{
		return ;
	}
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	c = i % 10 + '0';
	write(fd, &c, 1);
}

/*int main(){
	ft_putnbr_fd(0, 1);
}*/