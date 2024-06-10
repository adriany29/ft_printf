/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:29:19 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/06 11:18:13 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[5] = {'v','a','m','o','s'};
	char	dest[10] = {'1','1','1','1','1','1','1','1','1','1'};
	int	i;

	ft_memcpy(dest, src, 8);
	i = 0;
	while (i < 10)
	{
		printf("%c\n", dest[i]);
		i++;
	}
	return (0);
}*/
