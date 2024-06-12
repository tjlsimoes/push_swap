/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_nbr_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:13:28 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 15:02:56 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	best_nbr_moves_ba(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	temp = *b;
	i = case_rra_rrb_ba(a, b, temp->nbr); // Why start i like this?
	while (temp)
	{
		if (i > case_ra_rb_ba(a, b, temp->nbr))
			i = case_ra_rb_ba(a, b, temp->nbr);
		if (i > case_rra_rrb_ba(a, b, temp->nbr))
			i = case_rra_rrb_ba(a, b, temp->nbr);
		if (i > case_ra_rrb_ba(a, b, temp->nbr))
			i = case_ra_rrb_ba(a, b, temp->nbr);
		if (i > case_rra_rb_ba(a, b, temp->nbr))
			i = case_rra_rb_ba(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

int	best_nbr_moves_ab(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	temp = *a;
	i = case_rra_rrb_ab(a, b, temp->nbr); // Why start i like this?
	while (temp)
	{
		if (i > case_ra_rb_ab(a, b, temp->nbr))
			i = case_ra_rb_ab(a, b, temp->nbr);
		if (i > case_rra_rrb_ab(a, b, temp->nbr))
			i = case_rra_rrb_ab(a, b, temp->nbr);
		if (i > case_ra_rrb_ab(a, b, temp->nbr))
			i = case_ra_rrb_ab(a, b, temp->nbr);
		if (i > case_rra_rb_ab(a, b, temp->nbr))
			i = case_rra_rb_ab(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}
