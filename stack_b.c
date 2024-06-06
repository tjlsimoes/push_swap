/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 11:29:49 by tjorge-l         ###   ########.fr       */
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
