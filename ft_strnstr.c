/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:35:11 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/02 10:41:36 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s1[j] && i < n)
	{
		k = 0;
		while (i + k < n && s2[k] == s1[j + k])
		{
			if (s2[k + 1] == '\0')
			{
				return ((char *)s1 + j);
			}
			k++;
		}
		i++;
		j++;
	}
	if (s2[k] == '\0')
		return ((char *)s1);
	return (NULL);
}
