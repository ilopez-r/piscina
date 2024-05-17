/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:16:30 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/22 12:40:24 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main( int argc, char **argv)
{
	int	i;
	int	w;

	w = 1;
	while (w < argc)
	{
		i = 0;
		while (argv[w][i] != '\0')
		{
			write(1, &argv[w][i], 1);
			i++;
		}
		write (1, "\n", 1);
		w++;
	}
	return (0);
}
