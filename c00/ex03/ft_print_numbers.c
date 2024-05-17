/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:21:23 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/06 16:55:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	index;

	index = '0';
	while (index <= '9')
	{
		write (1, &index, 1);
		index++;
	}
}
/*
int main (void)
{
	ft_print_numbers ();
	return (0);
}*/
