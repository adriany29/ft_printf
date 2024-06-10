/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:15:54 by adaraujo          #+#    #+#             */
/*   Updated: 2024/05/27 14:50:52 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdint.h>
//#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (nmemb != 0 && ((nmemb * size) / nmemb != size))
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}
/*
int	main(void)
{
	void	*new;
//	void * p = ft_calloc(2, 2);
	new = calloc(INT_MIN, INT_MIN);
	printf("%p\n", new);
	free(new);
	return (0);
}*/
