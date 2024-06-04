/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:30:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 16:09:21 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	string_input(int argc, char **argv, t_stack **a)
{
	long long	nbr;
	char		**strs;
	int			i;

	i = 0;
	strs = ft_split(argv[1], ' ');
	argc = ft_split_size(strs);
	while (i < argc)
	{
		nbr = ft_atoi_alt(strs[i]);
		if (nbr == 2147483648)
		{
			split_clear(strs, --argc);
			free_and_error(a);
		}
		stack_add_back(a, stack_new(nbr));
		i++;
	}
	split_clear(strs, --i);
}

void	numerics_input(int argc, char **argv, t_stack **a)
{
	long long	nbr;
	int			i;

	i = 1;
	while (i < argc)
	{
		nbr = ft_atoi_alt(argv[i]);
		if (nbr == 2147483648)
			free_and_error(a);
		stack_add_back(a, stack_new(nbr));
		i++;
	}
}

void	stack_initialize(int argc, char **argv, t_stack **a)
{
	if (argc == 1)
		return ;
	else if (argc == 2)
		string_input(argc, argv, a);
	else
		numerics_input(argc, argv, a);
}

int	main(int argc, char **argv)
{
	t_stack		*a;

	a = NULL;
	stack_initialize(argc, argv, &a);
	stack_print(a);
	free_stack(&a);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int			i;
// 	long long	nbr;
// 	char		**strs;
// 	t_stack		*a;

// 	a = NULL;
// 	i = 1;

// 	if (argc == 1)
// 		return (1);
// 	else if (argc == 2)
// 	{
// 		// Initialize stack with result from split.
// 		strs = ft_split(argv[1], ' ');
// 		argc = ft_split_size(strs);
// 		while (i < argc)
// 		{
// 			nbr = ft_atoi_alt(strs[i]);
// 			if (nbr == 2147483648)
// 			{
// 				split_clear(strs, --argc);
// 				free_stack(&a);
// 				ft_error();
// 			}
// 			stack_add_back(&a, stack_new(nbr));
// 			i++;
// 		}
// 		split_clear(strs, --i);
// 	}
// 	else
// 	{
// 		while (i < argc)
// 		{
// 			nbr = ft_atoi_alt(argv[i]);
// 			if (nbr == 2147483648)
// 			{
// 				free_stack(&a);
// 				ft_error();
// 			}
// 			stack_add_back(&a, stack_new(nbr));
// 			i++;
// 		}
// 	}
// 	stack_print(a);
// 	free_stack(&a);
// 	return (0);
// }
