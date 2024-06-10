/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:50:26 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 14:38:06 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_pot(int n)
{
	int	i;
	int	p;

	p = 1;
	i = ft_len(n) - 1;
	while (i > 0)
	{
		p *= 10;
		i--;
	}
	return (p);
}

static char	*ft_convert(int n, char *str, int i)
{
	int	pot;

	pot = ft_pot(n);
	while (pot > 1)
	{
		str[i] = (n / pot) + '0';
		n = n % pot;
		pot = pot / 10;
		i++;
	}
	str[i] = n + '0';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_len(n) + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		i = 2;
		n = 147483648;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i = 1;
	}
	else
		i = 0;
	return (ft_convert(n, str, i));
}
/*
int	main(void)
{
	char	*str;

	str = ft_itoa(-2147483648);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
