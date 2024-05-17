/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:51:53 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/16 15:52:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 65 || str[a] > 90) && (str[a] < 97 || str[a] > 126))
			return (0);
		else
			a++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main (void)
{
	char str[10] = "a";

	printf("%u", ft_str_is_alpha(str));
	return (0);
}*/
