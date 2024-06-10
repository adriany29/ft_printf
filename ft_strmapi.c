/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:52:40 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 13:41:41 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	ft_pp(unsigned int i, char si)
{
	if ((i == 0) && (si > 96) && (si < 123))
		return (si - 32);
	else if ((i != 0) && (si < 91) && (si > 64))
		return (si + 32);
	else
		return (si);
}
*/
static int	ft_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(char) * (ft_len(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	char const	*s = "O PAPA 2E 3poP!";

	printf("%s\n", ft_strmapi(s, ft_pp));
	return (0);
}*/
