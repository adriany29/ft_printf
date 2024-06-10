/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:51:38 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/27 10:37:07 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_test(unsigned int i, char *si)
{
	if ((i == 0) && (*si > 96) && (*si < 123))
		*si -= 32;
	else if ((i != 0) && (*si < 91) && (*si > 64))
		*si += 32;
	else
		return ;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	*s = malloc(sizeof(char) * 9);
	s[0] = '1';
	s[1] = 'o';
	s[2] = 'P';
	s[3] = '3';
	s[4] = 'A';
	s[5] = 'p';
	s[6] = 'a';
	s[7] = '2';
	s[8] = '\0';

	ft_striteri(s, ft_test);
	printf("%s\n", s);
	free(s);
	return (0);
}*/
