/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:57:48 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/22 13:50:05 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while(s1[a] != '\0' $$ s2[a] != '\0' && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a])

int	main( int argc, char **argv)
{
	int	i;
	int	w;

	w = ;
	while (w < argc, w > 0)
	{
		i = 0;
		while (argv[w][i] != '\0')
		{
			write (1, &argv[w][i], 1);
			i++;
		}
		write (1, "\n", 1);
		w++
	}
	return (0);
}
