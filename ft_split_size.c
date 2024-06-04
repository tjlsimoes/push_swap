/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:31:36 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 10:39:44 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_split_size(char **split)
{
	int	i;

	if (!split)
		return (0);
	i = 0;
	while (split[i])
		i++;	
	return (i);
}
