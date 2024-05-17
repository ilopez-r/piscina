/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:28:15 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/15 17:33:01 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || str[a] > 90)
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
	char str[10] = "W";

	printf("%u", ft_str_is_uppercase(str));
	return (0);
}*/
