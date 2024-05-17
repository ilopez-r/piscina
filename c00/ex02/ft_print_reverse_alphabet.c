/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/06 17:08:33 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	index;

	index = 'z';
	while (index >= 'a')
	{
		write (1, &index, 1);
		index--;
	}
}
/*
int main (void)
{
	ft_print_reverse_alphabet ();
	return (0);
}*/
