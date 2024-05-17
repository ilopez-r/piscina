/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:35:23 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/15 17:42:24 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
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
	char str[10] = "ñ";

	printf("%u", ft_str_is_printable(str));
	return (0);
}*/
