/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:52:30 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:04:30 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pointer_hex_len(unsigned long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

static int	ft_print_pointer_hex(unsigned long number)
{
	int	len;

	len = ft_print_pointer_hex_len(number);
	if (number <= 9)
		ft_print_char(number + '0');
	else if (number < 16)
		ft_print_char((number - 10) + 'a');
	else
	{
		ft_print_pointer_hex(number / 16);
		ft_print_pointer_hex(number % 16);
	}
	return (len);
}

int	ft_print_pointer(unsigned long number)
{
	int	len;

	len = ft_print_string("0x");
	len += ft_print_pointer_hex(number);
	return (len);
}
