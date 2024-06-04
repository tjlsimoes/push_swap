/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:32:11 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 15:32:55 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*split_clear(char **array, int j)
{
	while (j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
	return (NULL);
}