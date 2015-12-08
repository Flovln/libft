/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviolin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:26:36 by fviolin           #+#    #+#             */
/*   Updated: 2015/12/02 14:57:43 by fviolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
		i++;
	while (s[j])
	{
		if (ft_isspace(s[j]) == 0)
		{
			j++;
			len = j;
		}
		else
			j++;
	}
	if (len == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, i, len - i));
}
