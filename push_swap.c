/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 10:40:15 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	long long	nbr;
	char		**strs;
	stack		*a;

	a = NULL;
	i = 1;

	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		// Initialize stack with result from split.
		strs = ft_split(argv[1], ' ');
		argc = ft_split_size(strs);
		i--;
		while (i < argc)
		{
			nbr = ft_atoi_alt(argv[i]);
			if (nbr == 2147483648)
			{
				free_stack(&a);
				ft_error();
			}
			stack_add_back(&a, stack_new(nbr));
			i++;
		}
	}
	else
	{
		while (i < argc)
		{
			nbr = ft_atoi_alt(argv[i]);
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
