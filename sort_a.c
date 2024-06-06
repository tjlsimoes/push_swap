/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:54:42 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 17:42:00 by tjorge-l         ###   ########.fr       */
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

// void	sort(t_stack **a, t_stack **b)
// {
// }