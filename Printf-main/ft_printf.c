/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:48:10 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:24:55 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char c, va_list ap)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_print_char(va_arg(ap, int));
	else if (c == 's')
		print_length += ft_print_string(va_arg(ap, char *));
	else if (c == 'p')
		print_length += ft_print_pointer(va_arg(ap, unsigned long));
	else if (c == 'd' || c == 'i')
		print_length += ft_print_integer(va_arg(ap, int));
	else if (c == 'u')
		print_length += ft_print_unsigned_integer(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		print_length += ft_print_hexadecimal(va_arg(ap, unsigned int), c);
	else if (c == '%')
		print_length += ft_print_char('%');
	else
	{
		print_length += ft_print_char('%');
		print_length += ft_print_char(c);
	}
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	int		print_lengh;
	va_list	ap;

	print_lengh = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			print_lengh += ft_printf_format(*(format + 1), ap);
			format += 2;
		}
		else
		{
			print_length += ft_print_char(*format);
			format++;
		}
	}
	va_end(ap);
	return (print_lengh);
}
