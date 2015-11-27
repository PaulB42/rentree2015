/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:26:28 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 16:34:21 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char d;
	unsigned char c;
	size_t i;

	i = 0;
	d = (unsigned char *)dst;
	c = (unsigned char *)src;
	while (i < n)
	{
		d[i] = c[i];
		i++;
	}
	return (dst);
}
