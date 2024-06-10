/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:20:09 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 10:55:38 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_len(dst);
	i = 0;
	if (len < (size - 1) && size > 0)
	{
		while (i < ((size - 1) - len) && (src[i] != '\0'))
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	if (len >= size)
		len = size;
	return (len + ft_len((char *)src));
}
/*
int     main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	
	printf("%ld\n", ft_strlcat(dst, src, 0));
	printf("%s\n", dst);
	return (0);
}*/
