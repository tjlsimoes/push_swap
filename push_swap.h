/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:38:19 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/03 15:34:57 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

#include "libft/libft.h"
#include "printf/ft_printf.h"

typedef struct stack {
    long			nbr;
    struct stack	*next;
	long			idx;
} stack;

void	ft_error(void);

int		ft_atoi_alt(char *str);

void	free_stack(stack **s);
stack	*last_on_stack(stack **s);
stack	*stack_new(int	content);
void	stack_add_back(stack **s, stack *new);
void	stack_print(stack *s);

#endif