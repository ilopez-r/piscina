/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:49 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/15 17:27:21 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 97 || str[a] > 122)
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
	char str[10] = "1";

	printf("%u", ft_str_is_lowercase(str));
	return (0);
}*/
