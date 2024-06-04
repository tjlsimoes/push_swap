/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_alt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:21:58 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/06/04 10:21:12 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoi_alt(char *str)
{
	long long	sign;
	long long	nbr;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if(!ft_isdigit(*str))
			return (2147483648LL);
		nbr = nbr * 10 + *str - 48;
		str++;
	}
	nbr = nbr * sign;
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (2147483648LL);
	return (nbr);
}
