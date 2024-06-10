/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:18:40 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 10:53:00 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void	*temp;
	int			i;

	if (dest == 0 || src == 0)
		return (NULL);
	temp = src;
	if (src >= dest)
	{
		i = 0;
		while (i < (int)n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(temp + i);
			i++;
		}
	}
	else
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(temp + i);
			i--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[5] = {'v','a','m','o','s'};
	char	dest[6] = {'1','1','1','1','1','1'};
	int	i;

	printf("%p\n",ft_memmove(dest, src, 0));

	i = 0;
	while (dest[i])
	{
		printf("%c\n", dest[i]);
		i++;
	}
	return (0);
}*/
