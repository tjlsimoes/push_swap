/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/03 15:04:04 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// if (argc == 1)
	// 	ft_printf(argv[0]);
	int		i;
	stack	*a;

	a = NULL;
	i = 1;

	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		// Initialize stack with result from split.
	}
	else
	{
		// Either several numeric args or
		// combination of numeric args and string
		// from which stack will have to be initialized
		// or process interrupted.

		while (i < argc)
		{
			stack_add_back(&a, stack_new(ft_atoi(argv[i])));
			i++;
		}
	}
	stack_print(a);
	free_stack(&a);
	return (0);
}