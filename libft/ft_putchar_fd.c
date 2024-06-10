/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:44:09 by adaraujo          #+#    #+#             */
/*   Updated: 2024/04/29 14:47:06 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	if (fd == -1)
		return (1);
	printf("fd = %d\n", fd);
	ft_putchar_fd('c', fd);
	close(fd);
	return (0);
}*/
