/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:12:39 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/27 10:39:32 by adaraujo         ###   ########.fr       */
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

static int	ft_first_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (j == ft_len(set))
			return (i);
	}
	return (i);
}

static int	ft_last_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_len(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i--;
				break ;
			}
			j++;
		}
		if (j == ft_len(set))
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		f;
	int		l;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	f = ft_first_index(s1, set);
	l = ft_last_index(s1, set);
	if ((l - f) >= 0)
		new = malloc(sizeof(char) * (l - f + 2));
	else
	{
		new = ft_strdup("");
		return (new);
	}
	if (new == NULL)
		return (NULL);
	i = 0;
	while (f <= l)
		new[i++] = (char)s1[f++];
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char const	*s1 = "high";
	char const	*set = "";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
