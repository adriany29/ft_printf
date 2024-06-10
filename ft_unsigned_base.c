/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:35 by adaraujo          #+#    #+#             */
/*   Updated: 2024/06/04 11:22:50 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_size(unsigned int nbr, int bs)
{
	int				count;
	unsigned int	temp;

	temp = nbr;
	count = 0;
	while (temp > 0)
	{
		temp = temp / bs;
		count++;
	}
	return (count);
}

static void	ft_print(unsigned int nbr, char *base, unsigned int bs)
{
	if (nbr >= bs)
	{
		ft_print(nbr / bs, base, bs);
		ft_print(nbr % bs, base, bs);
	}
	else
		write(1, &base[nbr], 1);
}

int	ft_punsigned_base(unsigned int nbr, int c)
{
	char	*base;
	int		bs;

	if (!nbr)
	{
		write(1, "0", 1);
		return (1);
	}
	if (c == 0)
	{
		base = "0123456789abcdef";
		bs = 16;
	}
	else if (c == 1)
	{
		base = "0123456789ABCDEF";
		bs = 16;
	}
	else
	{
		base = "0123456789";
		bs = 10;
	}
	ft_print(nbr, base, bs);
	return (ft_size(nbr, bs));
}
