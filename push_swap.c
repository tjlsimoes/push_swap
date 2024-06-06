/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 10:54:29 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;

	a = NULL;
	stack_initialize(argc, argv, &a);
	stack_print(a);
	sa(&a);
	stack_print(a);
	// ft_printf("Stack size = %d\n ", stack_size(&a));
	free_stack(&a);
	return (0);
}
