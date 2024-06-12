/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:58 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 17:27:30 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_ra_rb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n && idx_dest_stack_b(b, n) > 0)
			apply_rr_ab(a, b);
		while ((*a)->nbr != n)
			apply_r(a, 'a');
		while (idx_dest_stack_b(b, n) > 0)
			apply_r(b, 'b');
		apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n && idx_dest_stack_a(a, n) > 0)
			apply_rr_ab(a, b);
		while ((*b)->nbr != n)
			apply_r(b, 'b');
		while (idx_dest_stack_a(a, n) > 0)
			apply_r(a, 'a');
		apply_pa(a, b);
	}
	return (-1);
}

// idx_dest_stack_a(a, n) > 0 ensures that nbr to be pushed
// will be placed in its correct position when pushed to the
// top of the respective stack.

int	apply_rra_rrb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n && idx_dest_stack_b(b, n) > 0)
			apply_rrr(a, b);
		while ((*a)->nbr != n)
			apply_rr(a, 'a');
		while (idx_dest_stack_b(b, n) > 0)
			apply_rr(b, 'b');
		apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n && idx_dest_stack_a(a, n) > 0)
			apply_rrr(a, b);
		while ((*b)->nbr != n)
			apply_rr(b, 'b');
		while (idx_dest_stack_a(a, n) > 0)
			apply_rr(a, 'a');
		apply_pa(a, b);
	}
	return (-1);
}

int	apply_ra_rrb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n)
			apply_r(a, 'a');
		while (idx_dest_stack_b(b, n) > 0)
			apply_rr(b, 'b');
		apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n)
			apply_rr(b, 'b');
		while (idx_dest_stack_a(a, n) > 0)
			apply_r(a, 'a');
		apply_pa(a, b);
	}
	return (-1);
}

int	apply_rra_rb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		while ((*a)->nbr != n)
			apply_rr(a, 'a');
		while (idx_dest_stack_b(b, n) > 0)
			apply_r(b, 'b');
		apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n)
			apply_r(b, 'b');
		while (idx_dest_stack_a(a, n) > 0)
			apply_rr(a, 'a');
		apply_pa(a, b);
	}
	return (-1);
}
