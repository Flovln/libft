/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:15:54 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/02 10:42:47 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*uc_s1 && i < n - 1)
	{
		if (*uc_s1 != *uc_s2)
			return ((int)(*uc_s1 - *uc_s2));
		i++;
		uc_s1++;
		uc_s2++;
	}
	return ((int)(*uc_s1 - *uc_s2));
}
