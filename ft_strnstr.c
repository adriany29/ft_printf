/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:21:11 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 10:56:20 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_srch(const char *big, const char *little, size_t i)
{
	size_t	j;

	j = 0;
	while (little[j] != '\0')
	{
		if (little[j] == big[i + j])
			j++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_len(little) == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			if ((len - i) < ft_len(little))
				return (NULL);
			if (ft_srch(big, little, i) != 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	printf("%s\n", ft_strnstr("aaabcabcd", "aaabc", 5));
	return (0);
}*/
