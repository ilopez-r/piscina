/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:32:10 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/16 12:25:49 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (str[a - 1] < '0' || (str[a - 1] > '9' && str[a - 1] < 'A')
				|| (str[a - 1] > 'Z' && str[a - 1] < 'a') || str[a - 1] > 'z')
				str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
