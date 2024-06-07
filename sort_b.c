/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:54:42 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/07 10:40:14 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min(t_stack **s)
{
	t_stack	*node;
	int	min;

	if (!s || !*s)
		return (0);
	min = 0;
	node = *s;
	while (node)
	{
		if (node->nbr < min)
			min = node->nbr;
		node = node->next;
	}
	return (min);
}

int get_max(t_stack **s)
{
	t_stack	*node;
	int	max;

	if (!s || !*s)
		return (0);
	max = 0;
	node = *s;
	while (node)
	{
		if (node->nbr > max)
			max = node->nbr;
		node = node->next;
	}
	return (max);
}
