/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 18:25:16 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *s)
{
	if (!s)
	{
		ft_printf("\n");
		return ;
	}
	ft_printf("Stack is: ");
	while (s)
	{
		ft_printf("%d  ", s->nbr);
		s = s->next;
	}
	ft_printf("\n");
}

int	get_node_idx(t_stack **s, int nbr)
{
	int			i;
	t_stack		*node;

	if (!s || !*s)
		return (0);
	i = 0;
	node = *s;
	while (node)
	{
		if (nbr == node->nbr)
			return (i);
		node = node->next;
		i++;
	}
	return (-1);
}
// Note that it is get_node_idx() is returning -1
// if it doesn't find a node with the nbr passed
// as argument.

t_stack	*get_node_by_idx(t_stack **s, int idx)
{
	int			i;
	t_stack		*node;

	if (!s || !*s)
		return (NULL);
	i = 0;
	node = *s;
	while (node->next != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	return (node);
}

int	idx_dest_stack_a(t_stack **a, int nbr_push)
{
	int		i;
	t_stack	*temp_a;
	t_stack	*temp_b;

	i = 1;
	if (nbr_push < (*a)->nbr && nbr_push > (last_on_stack(a))->nbr)
		i = 0;
	else if (nbr_push > get_max(a) || nbr_push < get_min(a))
		i = get_node_idx(a, get_min(a));
	else
	{
		temp_a = *a;
		temp_b = (*a)->next;
		while (temp_a->nbr > nbr_push || temp_b->nbr < nbr_push)
		{
			temp_b = temp_b->next;
			temp_a = temp_a->next;
			i++;
		}
	}
	return (i);
}

// if (nbr_push < (*a)->nbr && nbr_push > (last_on_stack(a))->nbr)
// 	i = 0;
// Means: top of stack to which nbr is being pushed is ready to
//        receive said number; that is, it will be correctly
//        placed in between a number lesser than nbr_push and
//        another that is greater than nbr_push.
// e.g. stack a = 3, 4, 1 ; b = 2.
// Note difference between idx_dest_stack_a() and idx_dest_stack_b()
// in what regards to this condition amounts to the desire of keeping
// Stack A sorted in increasing order and the inverse desire of keeping
// Stack B sorted in decreasing order (to automatically get increasing
// order when pushing back to Stack A).

int	idx_dest_stack_b(t_stack **b, int nbr_push)
{
	int		i;
	t_stack	*temp_a;
	t_stack	*temp_b;

	i = 1;
	if (nbr_push > (*b)->nbr && nbr_push < (last_on_stack(b))->nbr)
		i = 0;
	else if (nbr_push > get_max(b) || nbr_push < get_min(b))
		i = get_node_idx(b, get_max(b));
	else
	{
		temp_a = (*b);
		temp_b = (*b)->next;
		while (temp_a->nbr < nbr_push || temp_b->nbr > nbr_push)
		{
			temp_b = temp_b->next;
			temp_a = temp_a->next;
			i++;
		}
	}
	return (i);
}
