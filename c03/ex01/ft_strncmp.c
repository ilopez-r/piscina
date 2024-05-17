/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:35:10 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/04/21 17:09:25 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && (a < n - 1) && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "maricon";
	char s2[] = "hermano";
	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}*/
