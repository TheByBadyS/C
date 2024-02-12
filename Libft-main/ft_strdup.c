/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:29:41 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/11 14:29:41 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *) malloc(ft_strlen(s1) + 1);
	if (dst == 0)
		return (0);
	ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
