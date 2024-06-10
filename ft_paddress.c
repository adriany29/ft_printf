/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paddress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:08:56 by adaraujo          #+#    #+#             */
/*   Updated: 2024/06/04 11:22:03 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_size(unsigned long long nbr, int bs)
{
	int					count;
	unsigned long long	temp;

	temp = nbr;
	count = 0;
	while (temp > 0)
	{
		temp = temp / bs;
		count++;
	}
	return (count);
}

static void	ft_print(unsigned long long nbr, char *base, unsigned long long bs)
{
	if (nbr >= bs)
	{
		ft_print(nbr / bs, base, bs);
		ft_print(nbr % bs, base, bs);
	}
	else
		write(1, &base[nbr], 1);
}

int	ft_paddress(unsigned long long nbr)
{
	int	count;

	if (!nbr)
	{
		write(1, "(nil)", 5);
		count = 5;
	}
	else
	{
		count = 2;
		write(1, "0x", 2);
		ft_print(nbr, "0123456789abcdef", 16);
		count += ft_size(nbr, 16);
	}
	return (count);
}
