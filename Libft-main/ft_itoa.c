/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:12:54 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/14 16:14:17 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *str, unsigned int count, long int val)
{
	while (count > 0)
	{
		str[val--] = '0' + (count % 10);
		count = count / 10;
	}
	return (str);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		val;
	unsigned int	count;
	int				sign;

	sign = 1;
	val = ft_len(n);
	str = (char *)malloc(sizeof(char) * (val + 1));
	if (str == 0)
		return (NULL);
	str[val--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		count = n * -1;
		str[0] = '-';
	}
	else
		count = n;
	str = ft_array(str, count, val);
	return (str);
}
