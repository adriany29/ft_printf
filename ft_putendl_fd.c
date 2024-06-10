/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:25:15 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/21 13:33:49 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_len(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*s = "DEixa disso";
	int		fd;

	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT);
	if (fd == -1)
		return (1);
	printf("%d\n", fd);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}*/
