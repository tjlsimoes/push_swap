/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:27:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 11:05:07 by tjorge-l         ###   ########.fr       */
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
