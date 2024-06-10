/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaraujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:13:52 by adaraujo          #+#    #+#             */
/*   Updated: 2024/06/04 11:16:42 by adaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_type(const char c, va_list ptr);
int	ft_pchar(int c);
int	ft_pstr(char *s);
int	ft_pint(int nbr);
int	ft_punsigned_base(unsigned int nbr, int c);
int	ft_paddress(unsigned long long nbr);

#endif
