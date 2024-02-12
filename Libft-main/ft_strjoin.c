/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:54:36 by toaktas           #+#    #+#             */
/*   Updated: 2023/01/13 17:13:59 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ss;

	ss = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == 0 || s2 == 0 || ss == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		ss[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		ss[i] = s2[j];
		i++;
		j++;
	}
	ss[i] = '\0';
	return (ss);
}
