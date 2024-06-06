/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:19 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/06 17:42:36 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct stack
{
	long			nbr;
	struct stack	*next;
	long			idx;
}	t_stack;

void		free_and_error(t_stack **a);
void		ft_error(void);

long long	ft_atoi_alt(char *str);
int			ft_split_size(char **split);
void		*split_clear(char **array, int j);

void		string_input(int argc, char **argv, t_stack **a);
void		numerics_input(int argc, char **argv, t_stack **a);
void		stack_initialize(int argc, char **argv, t_stack **a);

void		free_stack(t_stack **s);
t_stack		*get_node_by_idx(t_stack **s, int idx);
t_stack		*last_on_stack(t_stack **s);
t_stack		*stack_new(int content);
void		stack_add_back(t_stack **s, t_stack *new);
void		stack_print(t_stack *s);
int			stack_size(t_stack **s);

int			get_max(t_stack **s);
int			get_min(t_stack **s);
int			sorted_q(t_stack **s);

void		s(t_stack **a);
void		r(t_stack **a);
void		rr(t_stack **a);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

#endif