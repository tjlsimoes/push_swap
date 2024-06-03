/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/03 15:22:10 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	*stack_new(int content)
{
	stack	*new;
	
	new = (stack *)malloc(sizeof(stack));
	if (!new)
		ft_error();
	new->nbr = content;
	new->next = NULL;
	return (new);
}

stack	*last_on_stack(stack **s)
{
	stack	*node;

	if (!s || !*s)
		return (NULL);
	node = *s;
	while (node->next != NULL)
		node = node->next;
	return (node);
}

void	stack_add_back(stack **s, stack *new)
{
	if (!new || !s)
		return ;
	if (!(*s))
		*s = new;
	else
		(last_on_stack(s))->next = new;
}

void	stack_print(stack *s)
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

void	free_stack(stack **s)
{
	stack	*previous;
	stack	*current;

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