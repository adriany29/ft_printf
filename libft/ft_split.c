/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:39:50 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/27 11:18:28 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (s[i] != '\0')
	{
		if (i != 0 && (char)s[i] == c)
		{
			if ((char)s[i -1] != c)
				m++;
		}
		i++;
	}
	if ((char)s[i - 1] != c)
		m++;
	return (m);
}

static int	ft_sub_malloc(char **new, char const *s, char c)
{
	int	i;
	int	m;
	int	k;

	i = 0;
	m = 0;
	k = 0;
	while ((size_t)i <= ft_strlen(s))
	{
		if (((char)s[i] != c) && ((size_t)i != ft_strlen(s)))
			k++;
		else if (i != 0)
		{
			if ((char)s[i - 1] != c)
			{
				new[m] = malloc(sizeof(char) * (k + 1));
				if (new[m] == NULL)
					return (0);
				m++;
				k = 0;
			}
		}
		i++;
	}
	return (1);
}

static void	ft_feed(char **new, char const *s, char c)
{
	int	i;
	int	m;
	int	k;

	i = 0;
	m = 0;
	k = 0;
	while ((size_t)i <= ft_strlen(s))
	{
		if (((char)s[i] != c) && ((size_t)i != ft_strlen(s)))
			new[m][k++] = (char)s[i];
		else if (i != 0)
		{
			if ((char)s[i - 1] != c)
			{
				new[m++][k] = '\0';
				k = 0;
			}
		}
		i++;
	}
	new[ft_len(s, c)] = (void *)0;
}

static void	ft_free(char **new, char const *s, char c)
{
	int	i;

	i = 0;
	while (i <= ft_len(s, c))
	{
		free(new[i]);
		i++;
	}
	free(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s || !*s)
	{
		new = malloc(sizeof(void *) * 1);
		if (!new)
			return (NULL);
		*new = (void *)0;
		return (new);
	}
	new = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (new == NULL)
		return (NULL);
	if (ft_sub_malloc(new, s, c) == 0)
	{
		ft_free(new, s, c);
		return (NULL);
	}
	ft_feed(new, s, c);
	return (new);
}
/*
int	main(void)
{
	char	**new;
	const char	*s = "    J'ai     des     beaucoup   espaces        ";
	char	c = ' ';
	int	i = 0;
	new = ft_split(s, c);
	while (new[i] != 0)
	{
		printf("%s\n", new[i]);
		i++;
	}
	return (0);
}*/