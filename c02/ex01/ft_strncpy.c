/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:21:56 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/16 18:36:32 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest [a] = '\0';
		a++;
	}
	return (dest);
}

#include <stdio.h>

int	main (void)
{
	char dest[10];
	char src[] = "tusmuertosmecago";
	unsigned int  n;

	n = 9;

	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}
