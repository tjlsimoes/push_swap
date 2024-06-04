/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 16:13:26 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->nbr = content;
	new->next = NULL;
	return (new);
}

t_stack	*last_on_stack(t_stack **s)
{
	t_stack	*node;

	if (!s || !*s)
		return (NULL);
	node = *s;
	while (node->next != NULL)
		node = node->next;
	return (node);
}

void	stack_add_back(t_stack **s, t_stack *new)
{
	if (!new || !s)
		return ;
	if (!(*s))
		*s = new;
	else
		(last_on_stack(s))->next = new;
}

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

void	free_stack(t_stack **s)
{
	t_stack	*previous;
	t_stack	*current;

	if (!s || !*s)
		return ;
	current = *s;
	while (current != NULL)
	{
		previous = current;
		current = previous->next;
		free(previous);
	}
	*s = NULL;
}
