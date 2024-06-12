/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 13:51:53 by tjorge-l         ###   ########.fr       */
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

// Ayogun updates the found element's index to zero.
// Why?

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
	t_stack	*temp;

	i = 1;
	if (nbr_push < (*a)->nbr && nbr_push > (last_on_stack(a))->nbr)
		i = 0; // Why?
	else if (nbr_push > get_max(a) || nbr_push < get_min(a))
		i = get_node_idx(a, get_min(a));
	else
	{
		temp = (*a)->next;
		while (temp->nbr < nbr_push)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}

int	idx_dest_stack_b(t_stack **b, int nbr_push)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr_push > (*b)->nbr && nbr_push < (last_on_stack(b))->nbr)
		i = 0; // Why?
	else if (nbr_push > get_max(b) || nbr_push < get_min(b))
		i = get_node_idx(b, get_max(b));
	else
	{
		temp = (*b)->next;
		while (temp->nbr > nbr_push)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
