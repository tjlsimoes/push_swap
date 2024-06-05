/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:19 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/05 16:36:45 by tjorge-l         ###   ########.fr       */
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
t_stack		*last_on_stack(t_stack **s);
t_stack		*stack_new(int content);
void		stack_add_back(t_stack **s, t_stack *new);
void		stack_print(t_stack *s);
int			stack_size(t_stack **s);

#endif