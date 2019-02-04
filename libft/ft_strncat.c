/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:36:11 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/22 17:53:52 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	p;
	int		i;
	int		j;

	p = 0;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && (p < n))
	{
		s1[i] = s2[j];
		i++;
		j++;
		p++;
	}
	s1[i] = '\0';
	return (s1);
}