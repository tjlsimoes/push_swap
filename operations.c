/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:27:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 12:02:29 by tjorge-l         ###   ########.fr       */
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

// void	ra(t_stack **a)
// {
// 	t_stack		*first;
// 	t_stack		*penultimate;
// 	t_stack		*second;

// 	if (stack_size(a) <= 1)
// 		return ;
// 	first = *a;
// 	penultimate = get_node_by_idx(a, stack_size(a) - 1);
// 	second = first->next;
// 	if (penultimate == first)
// 	{
// 		sa(a);
// 		return ;
// 	}
// 	ft_printf("%d\n", penultimate->nbr);
// 	penultimate->next->next = first;
// 	*a = second;
// 	penultimate->next->next->next = NULL;
// }

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
