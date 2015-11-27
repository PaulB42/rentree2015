/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:38:49 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 15:09:43 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n && s[i] != c)
	{
		d[i] = s[i];
		i++;
	}
	if (d[i] == c)
	{
		i++;
		return (&d[i]);
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	
}
