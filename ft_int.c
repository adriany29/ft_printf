/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:30:08 by adaraujo          #+#    #+#             */
/*   Updated: 2024/06/04 11:08:40 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_pint(int nbr)
{
	char	*s;
	int		count;

	s = ft_itoa(nbr);
	count = ft_pstr(s);
	free(s);
	return (count);
}
