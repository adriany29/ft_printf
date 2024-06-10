/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:48:57 by adaraujo          #+#    #+#             */
/*   Updated: 2024/04/30 14:57:18 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int	s[5];
	size_t 	n = sizeof(int) * 4;
	int	c = '5';
	int	i;

	i = 0;
	while (i < 5)
	{
		s[i] = 'b';
		i++;
	}
	ft_memset(s, c, n);
	i = 0;
	while (i < 5)
	{
		printf("%c\n", s[i]);
		i++;
	}
	return (0);
}*/
