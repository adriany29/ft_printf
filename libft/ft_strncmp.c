/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:23:38 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/06 11:23:40 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("t", "", 0));
	printf("%d\n", ft_strncmp("1234", "1235", 3));
	printf("%d\n", ft_strncmp("", "1", 0));
	printf("%d\n", ft_strncmp("1", "", 0));
	printf("%d\n", strncmp("t", "", 0));
	printf("%d\n", strncmp("1234", "1235", 3));
	printf("%d\n", strncmp("", "1", 0));
	printf("%d\n", strncmp("1", "", 0));
	return (0);
}*/
