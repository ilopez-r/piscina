/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:05:00 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/07 11:57:09 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	text(char c, int digito)
{
	char	x;

	if (digito == 0)
		x = c / 10 + '0';
	else
		x = c % 10 + '0';
	write (1, &x, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			text (a, 0);
			text (a, 1);
			write (1, " ", 1);
			text (b, 0);
			text (b, 1);
			if (a < 98)
			{
				write (1, ", ", 2);
			}
		b++;
		}
	a++;
	}
}
/*
int main (void)
{
	ft_print_comb2 ();
	return (0);
}*/
