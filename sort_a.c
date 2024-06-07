/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:54:42 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/07 12:33:16 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_q(t_stack **s)
{
	t_stack	*node;
	t_stack	*next;

	if (!s || !*s)
		return (0);
	node = *s;
	next = node->next;
	while (node && next)
	{
		if (node->nbr > next->nbr)
			return (0);
		node = node->next;
		next = next->next;
	}
	return (1);
}

void	sort_three(t_stack	**a)
{
	if ((*a)->nbr == get_min(a))
	{
		apply_s(a, 'a');
		apply_r(a, 'a');
	}
	else if ((*a)->nbr == get_max(a))
	{
		apply_r(a, 'a');
		if (!sorted_q(a))
			apply_s(a, 'a');
	}
	else
	{
		if (get_node_idx(a, get_min(a)) == 1)
			apply_s(a, 'a');
		else
			apply_rr(a, 'a');
	}
}

void	sort(t_stack **a, t_stack **b)
{
	if (!a || !*a || !b)
		return ;
	if (stack_size(a) == 2)
		apply_s(a, 'a');
	else
	{
		sort_three(a);
	}
}
