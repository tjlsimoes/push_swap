/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/03 16:05:05 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// if (argc == 1)
	// 	ft_printf(argv[0]);
	int		i;
	long long	nbr;
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
			nbr = ft_atoi_alt(argv[i]);
			// Not freeing stack if there's an error mid parsing.
			if (nbr == 2147483648)
			{
				free_stack(&a);
				ft_error();
			}
			stack_add_back(&a, stack_new(nbr));
			i++;
		}
	}
	stack_print(a);
	free_stack(&a);
	return (0);
}