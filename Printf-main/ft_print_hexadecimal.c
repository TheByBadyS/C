/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:38:26 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 15:44:20 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexadecimal_len(unsigned int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (0);
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

int	ft_print_hexadecimal(unsigned int number, char token)
{
	int	len;

	len = ft_hexadecimal_len(number);
	if (number <= 9)
		ft_print_char(number + '0');
	else if (number < 16)
	{
		if (token == 'x')
			ft_print_char((number - 10) + 'a');
		else
			ft_print_char((number - 10) + 'A');
	}
	else
	{
		ft_print_hexadecimal(number / 16, token);
		ft_print_hexadecimal(number % 16, token);
	}
	return (len);
}
