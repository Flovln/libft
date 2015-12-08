/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:03:26 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/02 15:45:33 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = NULL;
	mem = (unsigned char *)malloc(sizeof(void) * size);
	if (!mem)
		return (NULL);
	while (size > 0)
	{
		mem[i] = 0;
		i++;
		size--;
	}
	return ((void *)mem);
}
