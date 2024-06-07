/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:31:46 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/07 10:36:43 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_s(t_stack **stack, char c)
{
	s(stack);
	ft_printf("s%c\n", c);
}

void	apply_r(t_stack **stack, char c)
{
	r(stack);
	ft_printf("r%c\n", c);
}

void	apply_rr(t_stack **stack, char c)
{
	rr(stack);
	ft_printf("rr%c\n", c);
}

void	apply_pa(t_stack **a, t_stack **b)
{
	pa(a, b);
	ft_printf("pa\n");
}

void	apply_pb(t_stack **a, t_stack **b)
{
	pb(a, b);
	ft_printf("pb\n");
}
