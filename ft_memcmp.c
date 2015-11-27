/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:41:16 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 15:05:48 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *c;
	unsigned char *d;
	size_t i;

	c = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c[i] != d[i])
			return ((int)(c[i] - (int)d[i]));
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_memcmp(argv[1], argv[2], 4));
	printf("\n%d", memcmp(argv[1], argv[2], 4));
}
