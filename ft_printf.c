/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 02405/29 0:49:41 by adaraujo          #+#    #+#             */
/*   Updated: 2024/06/04 11:15:49 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_type(const char c, va_list ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_pchar(va_arg(ptr, int));
	else if (c == 's')
		count += ft_pstr(va_arg(ptr, char *));
	else if (c == 'p')
		count += ft_paddress(va_arg(ptr, unsigned long long));
	else if (c == 'i' || c == 'd')
		count += ft_pint(va_arg(ptr, int));
	else if (c == 'u')
		count += ft_punsigned_base(va_arg(ptr, unsigned int), 2);
	else if (c == 'x')
		count += ft_punsigned_base(va_arg(ptr, unsigned int), 0);
	else if (c == 'X')
		count += ft_punsigned_base(va_arg(ptr, unsigned int), 1);
	else if (c == '%')
		count += ft_pchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ptr;

	va_start(ptr, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_type(format[i + 1], ptr);
			i++;
		}
		else
			count += ft_pchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
/*
int	main()
{
	int	count;
	int count2;
	unsigned int u = -21382;
//	int	p = 0;

	count = 0;

	count = ft_printf("Imprima %c pra mim \n", 'a');
	printf("%d\n", count);
	count2 = printf("Imprima %c pra mim \n", 'a');
	printf("%d\n", count2);

	count = ft_printf("%s\n", NULL);
	printf("%d\n", count);
	count2 = printf("%s\n", NULL);
	printf("%d\n", count2);

	count = ft_printf("%p\n", NULL);
	printf("%d\n", count);
	count2 = printf("%p\n", NULL);
	printf("%d\n", count2);

	count = ft_printf("Imprima %i pra mim ", -1);
	printf("%d\n", count);
	count2 = printf("Imprima %i pra mim ", -1);
	printf("%d\n", count2);

	count = ft_printf("Imprima %u pra mim ", u);
	printf("%d\n", count);
	count2 = printf("Imprima %u pra mim ", u);
	printf("%d\n", count2);

	count = ft_printf("Imprima %x pra mim ", 0);
	printf("%d\n", count);
	count2 = printf("Imprima %x pra mim \n", 0);
	printf("%d\n", count2);

	count = ft_printf("Imprima %X pra mim ", 0);
	printf("%d\n", count);
	count2 = printf("Imprima %X pra mim ", 0);
	printf("%d\n", count2);

	count = ft_printf("Imprima %% pra mim ");
	printf("%d\n", count);
	count2 = printf("Imprima %% pra mim ");
	printf("%d\n", count2);

	return (0);
}*/
