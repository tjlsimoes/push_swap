/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:58 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/11 15:26:15 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_ra_rb(t_stack **a, t_stack **b, int n, char c)
{

	if (c == 'a')
	{
		// apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n && idx_dest_stack_a(a, n) > 0)
			apply_rr_ab(a, b);
		// Why idx_dest_stack_a(a, n) ?? Ensure min is on top?
		while ((*b)->nbr != n)
			apply_r(b, 'b');
		while (idx_dest_stack_a(a, n) > 0)
			apply_r(a, 'a');
		apply_pa(a, b);
	}
	return (-1);
}

int	apply_rra_rrb(t_stack **a, t_stack **b, int n, char c)
{
	if (c == 'a')
	{
		// apply_pb(a, b);
	}
	else
	{
		while ((*b)->nbr != n && idx_dest_stack_a(a, n) > 0)
			apply_rrr(a, b);
		// Why idx_dest_stack_a(a, n) ?? Ensure min is on top?
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
		// apply_pb(a, b);
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
		// apply_pb(a, b);
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
