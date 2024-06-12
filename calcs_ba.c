/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcs_ba.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:15:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 15:58:21 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_ra_rb_ba(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = idx_dest_stack_a(a, n);
	if (i < get_node_idx(b, n))
		i = get_node_idx(b, n);
	return (i);
}

int	case_rra_rrb_ba(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (idx_dest_stack_a(a, n))
		i = stack_size(a) - idx_dest_stack_a(a, n);
	if (i < (stack_size(b) - get_node_idx(b, n)) && get_node_idx(b, n))
		i = stack_size(b) - get_node_idx(b, n);
	return (i);
}

int	case_ra_rrb_ba(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (get_node_idx(b, n))
		i = stack_size(b) - get_node_idx(b, n);
	i = idx_dest_stack_a(a, n) + i;
	return (i);
}

int	case_rra_rb_ba(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (idx_dest_stack_a(a, n))
		i = stack_size(a) - idx_dest_stack_a(a, n);
	i = get_node_idx(b, n) + i;
	return (i);
}
