/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/05/31 12:18:51 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// if (argc == 1)
	// 	ft_printf(argv[0]);

	int	i;

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
			ft_printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}