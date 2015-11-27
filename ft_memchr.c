/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:28:23 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 14:40:08 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char d;
	unsigned char e;
	size_t i;

	d = (unsigned char *)s;
	e = (unsigned char)c;
	i = 0;
	while (d[i] < n)
	{
			if (d[i] == e)
				return (&d[i]);
			i++;
	}
	return (NULL);
}
