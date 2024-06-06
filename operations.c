/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:27:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 12:12:26 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack		*first;
	t_stack		*second;

	if (stack_size(a) <= 1)
		return ;
	first = *a;
	second = first->next;

	first->next = second->next;
	*a = second;
	second->next = first;
}

void	ra(t_stack **a)
{
	t_stack		*first;
	t_stack		*last;
	t_stack		*second;

	if (stack_size(a) <= 1)
		return ;
	else if (stack_size(a) == 2)
	{
		sa(a);
		return ;
	}
	first = *a;
	last = last_on_stack(a);
	second = first->next;
	last->next = first;
	*a = second;
	last->next->next = NULL;
}

void	rra(t_stack **a)
{
	t_stack		*first;
	t_stack		*penultimate;
	t_stack		*last;

	if (stack_size(a) <= 1)
		return ;
	else if (stack_size(a) == 2)
	{
		sa(a);
		return ;
	}
	penultimate = get_node_by_idx(a, stack_size(a) - 1);
	first = *a;
	last = penultimate->next;
	last->next = first;
	*a = last;
	penultimate->next = NULL;
}
