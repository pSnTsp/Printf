/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:03:36 by psantos           #+#    #+#             */
/*   Updated: 2021/12/03 14:59:52 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_triagem(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_p(va_arg(args, unsigned long)));
	else if (*format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_hexa((unsigned long)va_arg(args, unsigned int)));
	else if (*format == 'X')
		return (ft_hexa2((unsigned long)va_arg(args, unsigned int)));
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{	
	size_t	i;
	int		charcount;
	va_list	args;

	i = 0;
	charcount = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			charcount += ft_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			charcount += ft_triagem(args, &format[i]);
			i++;
		}
		va_end(args);
	}
	return (charcount);
}
