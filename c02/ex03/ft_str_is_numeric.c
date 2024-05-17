/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:55:37 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/16 13:30:11 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
			return (0);
		else
			a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main (void)
{
	char str[10] = "w";

	printf("%u", ft_str_is_numeric(str));
	return (0);
}*/
