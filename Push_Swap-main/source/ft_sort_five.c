/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:30:17 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/31 20:30:18 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag, 0);
	flag = 1;
	ft_push_small_a(stackA, stackB, flag, 0);
	ft_sort_three(stackA);
	pa(stackA, stackB);
	pa(stackA, stackB);
}
