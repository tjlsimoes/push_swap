/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:24:07 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/11 12:26:40 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_rrr(t_stack **a, t_stack **b)
{
	rr(a);
	rr(b);
	ft_printf("rrr\n");
}

void	apply_rr_ab(t_stack **a, t_stack **b)
{
	r(a);
	r(b);
	ft_printf("rr\n");
}

void	apply_ss(t_stack **a, t_stack **b)
{
	s(a);
	s(b);
	ft_printf("ss\n");
}