/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:30:22 by toaktas           #+#    #+#             */
/*   Updated: 2023/07/31 20:30:23 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag, int i)
{
	t_list	*head;

	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
			{
				while (i-- > 0)
					ra(stackA);
			}
			else
			{
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
