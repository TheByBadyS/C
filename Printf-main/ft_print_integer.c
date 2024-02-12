/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:45:02 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:19:11 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_integer_len(long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_print_integer(int number)
{
	long	temp;
	int		len;

	temp = number;
	len = ft_integer_len(temp);
	if (temp < 0)
	{
		ft_print_char('-');
		temp = -temp;
	}
	if (temp < 10)
		ft_print_char(temp + '0');
	else
	{
		ft_print_integer(temp / 10);
		ft_print_integer(temp % 10);
	}
	return (len);
}
