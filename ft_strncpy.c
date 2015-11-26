/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:11:07 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/25 14:01:56 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && src[i] < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (src[i] < n)
	{
		dst[i] = '\0';
		i++
	}
	return (dst);
}
