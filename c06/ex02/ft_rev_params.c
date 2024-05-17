/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:41:38 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/22 12:56:02 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main( int argc, char **argv)
{
	int	i;
	int	w;

	w = argc - 1;
	while (w < argc && w > 0)
	{
		i = 0;
		while (argv[w][i] != '\0')
		{
			write(1, &argv[w][i], 1);
			i++;
		}
		write(1, "\n", 1);
		w--;
	}
	return (0);
}
