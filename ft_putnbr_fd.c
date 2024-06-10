/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:40:31 by adaraujo          #+#    #+#             */
/*   Updated: 2024/04/30 10:48:41 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n += '0';
		write (fd, &n, 1);
	}
}
/*
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT);
	if (fd == -1)
		return (1);
	printf("%d\n", fd);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	return (0);
}*/
