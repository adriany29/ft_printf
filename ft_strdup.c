/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:00:39 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/06 13:39:08 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	new = malloc(sizeof(char) * (ft_len(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = (char)s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	const char	*s = "Por onde andei?";
	char	*new;

	new = ft_strdup(s);
	printf("%s\n", new);
	free(new);
	return (0);
}*/
