/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:04:40 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/02/20 20:57:59 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	signo;
	int	num;

	a = 0;
	signo = 1;
	num = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			signo *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - 48);
		a++;
	}
	return (num * signo);
}

#include<stdio.h>

int main(void)
{
	char *str = "  ---+--+ 1234ab456";
	int a;
	a = ft_atoi(str);
	printf("%d\n", a);
	return (0);
}
