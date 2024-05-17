/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:48:46 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/13 17:49:47 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab [size - 1] = aux;
		i++;
		size--;
	}
}
