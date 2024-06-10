/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:12:12 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/27 10:38:00 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	new = malloc(sizeof(char) * (ft_len(s1) + ft_len(s2) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	const char	*s1 = "Casa";
	const char	*s2 = "mento";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
