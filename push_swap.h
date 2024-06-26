/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:19 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/12 18:26:28 by tjorge-l         ###   ########.fr       */
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
int			get_node_idx(t_stack **s, int nbr);
t_stack		*last_on_stack(t_stack **s);
t_stack		*stack_new(int content);
void		stack_add_back(t_stack **s, t_stack *new);
void		stack_print(t_stack *s);
int			stack_size(t_stack **s);

int			get_max(t_stack **s);
int			get_min(t_stack **s);
void		sort(t_stack **a, t_stack **b);
int			sorted_q(t_stack **s);
void		sort_till_three(t_stack **a, t_stack **b);

void		s(t_stack **a);
void		r(t_stack **a);
void		rr(t_stack **a);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

void		apply_s(t_stack **stack, char c);
void		apply_r(t_stack **stack, char c);
void		apply_rr(t_stack **stack, char c);
void		apply_pa(t_stack **a, t_stack **b);
void		apply_pb(t_stack **a, t_stack **b);
void		apply_rrr(t_stack **a, t_stack **b);
void		apply_rr_ab(t_stack **a, t_stack **b);
void		apply_ss(t_stack **a, t_stack **b);

int			apply_ra_rb(t_stack **a, t_stack **b, int n, char c);
int			apply_rra_rrb(t_stack **a, t_stack **b, int n, char c);
int			apply_ra_rrb(t_stack **a, t_stack **b, int n, char c);
int			apply_rra_rb(t_stack **a, t_stack **b, int n, char c);

int			best_nbr_moves_ba(t_stack **a, t_stack **b);
int			best_nbr_moves_ab(t_stack **a, t_stack **b);
int			idx_dest_stack_a(t_stack **a, int nbr_push);
int			idx_dest_stack_b(t_stack **b, int nbr_push);

int			case_ra_rb_ba(t_stack **a, t_stack **b, int n);
int			case_rra_rrb_ba(t_stack **a, t_stack **b, int n);
int			case_ra_rrb_ba(t_stack **a, t_stack **b, int n);
int			case_rra_rb_ba(t_stack **a, t_stack **b, int n);

int			case_ra_rb_ab(t_stack **a, t_stack **b, int n);
int			case_rra_rrb_ab(t_stack **a, t_stack **b, int n);
int			case_ra_rrb_ab(t_stack **a, t_stack **b, int n);
int			case_rra_rb_ab(t_stack **a, t_stack **b, int n);

#endif