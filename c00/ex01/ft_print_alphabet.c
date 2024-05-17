/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:18:20 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/06 17:10:35 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	index;

	index = 'a';
	while (index <= 'z')
	{
		write (1, &index, 1);
		index++;
	}
}
/*
int main (void)
{
	ft_print_alphabet ();
	return (0);
}*/
