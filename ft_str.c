/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:43:57 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/29 13:33:28 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_pstr(char *s)
{
	int	count;
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		count = 6;
	}
	else
	{
		count = 0;
		i = 0;
		while (s[i] != '\0')
		{
			count += ft_pchar(s[i]);
			i++;
		}
	}
	return (count);
}
