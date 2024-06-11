/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcs_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:47:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/11 15:54:08 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_ra_rb_ab(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = idx_dest_stack_a(b, n);
	if (i < get_node_idx(a, n))
		i = get_node_idx(a, n);
	return (i);
}

int	case_rra_rrb_ab(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (idx_dest_stack_a(b, n))
		i = stack_size(b) - idx_dest_stack_a(b, n);
	if (i < stack_size(a) - get_node_idx(a, n) && get_node_idx(a, n))
		i = stack_size(a) -  get_node_idx(a, n);
	return (i);
}

int	case_ra_rrb_ab(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (get_node_idx(b, n))
		i = stack_size(b) - get_node_idx(b, n);
	i = idx_dest_stack_a(a, n) + i;
	return (i);
}

int case_rra_rb_ab(t_stack **a, t_stack **b, int n)
{
	int	i;

	i = 0;
	if (idx_dest_stack_a(a, n))
		i = stack_size(a) - idx_dest_stack_a(a, n);
	i = get_node_idx(b, n) + i;
	return (i);
}