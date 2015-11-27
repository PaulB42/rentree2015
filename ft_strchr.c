/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:48:50 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 16:38:23 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	unsigned char a;

	a = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (&s[i])
		i++;
	}
	return (0);
}
