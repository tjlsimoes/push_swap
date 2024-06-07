/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/07 11:24:48 by tjorge-l         ###   ########.fr       */
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

int	*get_node_idx(t_stack **s, int nbr)
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
