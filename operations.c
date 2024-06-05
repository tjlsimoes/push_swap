/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:27:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/05 16:58:50 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack		*first;
	t_stack		*second;
	t_stack		*temp;

	if (stack_size(a) <= 1)
		return ;
	first = *a;
	second = first->next;
	temp = first;
	
	first->next = second->next;
	first->nbr = second->nbr;
	first->idx = second->idx;
	
	second->next = first;
	second->nbr = temp->nbr;
	second->idx = temp->idx;

	*a = second;
}
