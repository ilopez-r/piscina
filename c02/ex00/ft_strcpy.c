/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:24:35 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/15 13:17:24 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest [a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char dest[10];
	char src[4] = "Hola";

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/
