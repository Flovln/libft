/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:33:05 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/08 15:47:33 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		n = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		i = 10 * i + (*str - '0');
		str++;
	}
	if (n)
		return (-i);
	return (i);
}
