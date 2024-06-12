/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 13:52:50 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	stack_initialize(argc, argv, &a);

	ft_printf("Original A: ");
	stack_print(a);
	ft_printf("\n");
	ft_printf("Stack size = %d\n", stack_size(&a));

	if (!sorted_q(&a))
	{
		ft_printf("Not sorted!\n");
		sort(&a, &b);
	}

	ft_printf("Sorted A: ");
	stack_print(a);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	t_stack		*a;
// 	t_stack		*b;

// 	a = NULL;
// 	b = NULL;
// 	stack_initialize(argc, argv, &a);
// 	ft_printf("Original A: ");
// 	stack_print(a);
// 	ft_printf("\n");
// 	// s(&a);
// 	// r(&a);
// 	// rr(&a);
// 	// pb(&a, &b);
// 	// pb(&a, &b);
// 	// pa(&a, &b);

// 	ft_printf("A: ");
// 	stack_print(a);
// 	ft_printf("\n");

// 	ft_printf("B: ");
// 	stack_print(b);
// 	ft_printf("\n");

// 	ft_printf("Stack size = %d\n ", stack_size(&a));
// 	free_stack(&a);
// 	free_stack(&b);
// 	return (0);
// }
