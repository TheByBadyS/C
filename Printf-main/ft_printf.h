/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:14:18 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/19 16:25:19 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(int c);
int	ft_print_string(const char *string);
int	ft_print_ponter(unsigned long number);
int	ft_print_integer(int number);
int	ft_print_unsigned_integer(unsigned int number);
int	ft_print_hexadecimal(unsigned int number, char c);
int	ft_printf(const char *format, ...);

#endif