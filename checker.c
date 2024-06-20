/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:12:58 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/20 10:51:06 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_move(t_list **moves, const char *str, t_stack **a, t_stack **b)
{
	if (!ft_strncmp("rra\n", str, ft_strlen("rra\n")))
		rr(a);
	else if (!ft_strncmp("rrb\n", str, ft_strlen("rrb\n")))
		rr(b);
	else if (!ft_strncmp("rrr\n", str, ft_strlen("rrr\n")))
		rrr(a, b);
	else if (!ft_strncmp("ra\n", str, ft_strlen("ra\n")))
		r(a);
	else if (!ft_strncmp("rb\n", str, ft_strlen("rb\n")))
		r(b);
	else if (!ft_strncmp("rr\n", str, ft_strlen("rr\n")))
		rr_ab(a, b);
	else if (!ft_strncmp("sa\n", str, ft_strlen("sa\n")))
		s(a);
	else if (!ft_strncmp("sb\n", str, ft_strlen("sb\n")))
		s(b);
	else if (!ft_strncmp("ss\n", str, ft_strlen("ss\n")))
		ss(a, b);
	else if (!ft_strncmp("pa\n", str, ft_strlen("pa\n")))
		pa(a, b);
	else if (!ft_strncmp("pb\n", str, ft_strlen("pb\n")))
		pb(a, b);
	else
		free_lab_error(moves, a, b);
}

void	execute_moves(t_list **move, t_stack **a, t_stack **b)
{
	t_list	*temp;

	if (!a || !*a || !b)
		return ;
	temp = *move;
	while (temp)
	{
		execute_move(move, (const char *)temp->content, a, b);
		temp = temp->next;
	}
	ft_lstclear(move, (*free));
}

void	list_print(t_list *s)
{
	if (!s)
	{
		ft_printf("\n");
		return ;
	}
	ft_printf("Stack is: ");
	while (s)
	{
		ft_printf("%s  ", (char *)s->content);
		s = s->next;
	}
	ft_printf("\n");
}

int	list_init(t_list **move)
{
	char	*line;

	if (!move)
		return (0);
	line = get_next_line(0);
	if (line)
	{
		if (!(*move))
			*move = ft_lstnew((char *)line);
		else
			ft_lstadd_back(move, ft_lstnew(line));
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_list		*move;

	a = NULL;
	b = NULL;
	move = NULL;
	if (argc == 1)
		return (1);
	stack_initialize(argc, argv, &a);
	while (1)
	{
		if (!list_init(&move))
			break ;
	}
	execute_moves(&move, &a, &b);
	if (sorted_q(&a) && !b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(&a);
	free_stack(&b);
	return (0);
}
