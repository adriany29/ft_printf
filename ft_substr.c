/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:13:05 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 14:49:34 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

static unsigned int	ft_len(char const *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if (s == NULL)
		return (NULL);
	if ((size_t)start >= ft_len(s))
		return (ft_strdup(""));
	if (len > ((size_t)ft_len(s) - start))
		len = (size_t)ft_len(s) - start;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (((size_t)i < len) && s[i] != '\0')
	{
		new[i] = (char)s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char	*new;
	char * s = ft_substr("tripouille", 0, 42000);

	new = ft_substr(s, strlen("tripouille") + 1);
	printf("%s\n", new);
	free(new);
	return (0);
}*/
