/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:13:22 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/07 11:30:28 by tjorge-l         ###   ########.fr       */
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

int	duplicate_q(t_stack **s)
{
	t_stack	*node;
	t_stack	*other_node;
	int		i;

	if (!s || !*s)
		return (0);
	node = *s;
	while (node)
	{
		i = node->nbr;
		other_node = node->next;
		while (other_node)
		{
			if (i == other_node->nbr)
				return (1);
			other_node = other_node->next;
		}
		node = node->next;
	}
	return (0);
}

void	stack_initialize(int argc, char **argv, t_stack **a)
{
	if (argc == 1)
		return ;
	else if (argc == 2)
		string_input(argc, argv, a);
	else
		numerics_input(argc, argv, a);
	if (duplicate_q(a))
		free_and_error(a);
}
