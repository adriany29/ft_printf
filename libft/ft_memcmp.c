/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:17:24 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 10:40:53 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
			i++;
		else
			break ;
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	char sCpy[] = {-128, 0, 127, 0};
	printf("%d\n", ft_memcmp(s, sCpy, 4));
	printf("%d\n", memcmp(s, sCpy, 4));
	return (0);
}*/
