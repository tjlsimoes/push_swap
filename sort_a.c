/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:54:42 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 15:19:58 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	sort_till_three(t_stack **a, t_stack **b)
{
	t_stack		*temp;
	int			i;

	while (stack_size(a) > 3 && !sorted_q(a))
	{
		temp = *a;
		i = best_nbr_moves_ab(a, b);
		while (i >= 0)
		{
			if (i == case_ra_rb_ab(a, b, temp->nbr))
				i = apply_ra_rb(a, b, temp->nbr, 'a');
			else if (i == case_rra_rrb_ab(a, b, temp->nbr))
				i = apply_rra_rrb(a, b, temp->nbr, 'a');
			else if (i == case_ra_rrb_ab(a, b, temp->nbr))
				i = apply_ra_rrb(a, b, temp->nbr, 'a');
			else if (i == case_rra_rb_ab(a, b, temp->nbr))
				i = apply_rra_rb(a, b, temp->nbr, 'a');
			else
				temp = temp->next;
		}
	}
}

void	sort_b(t_stack **a, t_stack **b)
{
	if (stack_size(a) > 3)
		apply_pb(a, b);
	if (stack_size(a) > 3 && !sorted_q(a))
		apply_pb(a, b);
	if (stack_size(a) > 3 && !sorted_q(a))
		sort_till_three(a, b);
	if (!sorted_q(a))
		sort_three(a);
}

void	sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		i = best_nbr_moves_ba(a, b);
		while (i >= 0)
		{
			if (i == case_ra_rb_ba(a, b, temp->nbr))
				i = apply_ra_rb(a, b, temp->nbr, 'b');
			else if (i == case_ra_rrb_ba(a, b, temp->nbr))
				i = apply_ra_rrb(a, b, temp->nbr, 'b');
			else if (i == case_rra_rrb_ba(a, b, temp->nbr))
				i = apply_rra_rrb(a, b, temp->nbr, 'b');
			else if (i == case_rra_rb_ba(a, b, temp->nbr))
				i = apply_rra_rb(a, b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int	i;

	if (!a || !*a || !b)
		return ;
	if (stack_size(a) == 2)
		apply_s(a, 'a');
	else
	{
		sort_b(a, b);
		sort_a(a, b);
		i = get_node_idx(a, get_min(a));
		if (i < stack_size(a) - i)
		{
			while ((*a)->nbr != get_min(a))
				apply_r(a, 'a');
		}
		else
		{
			while ((*a)->nbr != get_min(a))
				apply_rr(a, 'a');
		}
	}
}
