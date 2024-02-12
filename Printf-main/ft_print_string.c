/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:04:56 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:07:46 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*string != '\0')
	{
		ft_print_char(*string);
		string++;
		i++;
	}
	return (i);
}
