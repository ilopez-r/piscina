/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:52:31 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/07 18:26:31 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		c = nb % 10 + '0';
		if (nb > 9)
		{
			nb = nb / 10;
			ft_putnbr(nb);
		}
		write(1, &c, 1);
	}
}
/*
int main(void)
{
	ft_putnbr(-42);
	return (0);
}*/
