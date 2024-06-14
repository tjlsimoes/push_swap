/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:12:58 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/14 13:28:58 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alt_lstclear(t_list **s)
{
	t_list	*previous;
	t_list	*current;

	if (!s || !*s)
		return ;
	current = *s;
	while (current != NULL)
	{
		previous = current;
		current = previous->next;
		free(previous);
	}
	*s = NULL;
}

void	execute_move(t_list **moves, char *str, t_stack **a, t_stack **b)
{
	if (str[0] == 'r' && str[1] == 'r' && str[2] != '\n' )
	{
		if (str[2] == 'a' && str[3] == '\n')
			rr(a);
		if (str[2] == 'b' && str[3] == '\n')
			rr(b);
		if (str[2] == 'r' && str[3] == '\n')
			rrr(a, b);
		else
			free_lab_error(moves, a, b);
	}
	else if (str[0] == 'r')
	{
		if (str[1] == 'a' && str[2] == '\n')
			r(a);
		if (str[1] == 'b' && str[2] == '\n')
			r(b);
		if (str[1] == 'r' && str[2] == '\n')
			rr_ab(a, b);
		else
			free_lab_error(moves, a, b);
	}
	else if (str[0] == 's')
	{
		if (str[1] == 'a' && str[2] == '\n')
			s(a);
		if (str[1] == 'b' && str[2] == '\n')
			s(b);
		if (str[1] == 'r' && str[2] == '\n')
			ss(a, b);
		else
			free_lab_error(moves, a, b);
	}
	else if (str[0] == 'p')
	{
		if (str[1] == 'a' && str[2] == '\n')
			pa(a, b);
		if (str[1] == 'b' && str[2] == '\n')
			pb(a, b);
		else
			free_lab_error(moves, a, b);
	}
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
		execute_move(move, temp->content, a, b);
		temp = temp->next;
	}
	alt_lstclear(move);
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
		ft_printf("%s  ", s->content);
		s = s->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_list		*move;
	char		*line;

	a = NULL;
	b = NULL;
	move = NULL;
	stack_initialize(argc, argv, &a);
	// if (sorted_q(&a))
	// 	ft_printf("OK\n");
	while (1)
	{
		line = get_next_line(0);
		if (line)
		{
			if (!move)
				move = ft_lstnew((char *)line);
			else
				ft_lstadd_back(&move, ft_lstnew((char *)line));
			// ft_printf("%s", line);
			// ft_printf("%d\n", ft_strlen(line));
			free(line);
		}
		else
			break ;
	}
	// list_print(move);
	// alt_lstclear(&move);
	execute_moves(&move, &a, &b);
	if (sorted_q(&a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	stack_print(a);
	free_stack(&a);
	free_stack(&b);
	return (0);
}