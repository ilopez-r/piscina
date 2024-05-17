/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:29 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/13 12:22:39 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int n1 = 4;
	int n2 = 2;
	int *a;
	int *b;

	a= &n1;
	b = &n2;
	ft_ultimate_div_mod(a, b);
	printf ("%u\n", n1);
	printf ("%u\n", n2);
}*/
