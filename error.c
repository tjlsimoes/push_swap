/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:22:01 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/14 16:34:18 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lab_error(t_list **moves, t_stack **a, t_stack **b)
{
	ft_lstclear(moves, (*free));
	free_stack(a);
	free_stack(b);
	ft_error();
}

void	free_and_error(t_stack **a)
{
	free_stack(a);
	ft_error();
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
