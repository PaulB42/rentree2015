/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:39:39 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 16:35:15 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char c;
	unsigned char d;
	unsigned char *temp;
	size_t i;

	c = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		temp[i] - c[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
			temp[i] = d[i];
			i++;
	}
	return ();
}
