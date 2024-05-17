/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:42:22 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/20 12:59:40 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>

int main (void)
{
	char s1[] = "Maricona";
	char s2[] = "Maricon";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
