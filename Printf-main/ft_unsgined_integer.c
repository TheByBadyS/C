/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgined_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:08:23 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:26:09 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_integer_len(unsigned int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned_integer(unsigned int number)
{
	int	len;

	len = ft_unsigned_integer_len(number);
	if (number < 10)
		ft_print_char(number + '0');
	else
	{
		ft_print_integer(number / 10);
		ft_print_integer(number % 10);
	}
	return (len);
}
