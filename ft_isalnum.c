/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:25:26 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/25 13:51:00 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalnum(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a >= 48 && a <= 57)
		return (1);
	else if (a >= 65 && a <= 90)
		return (1);
	else if (a >= 97 && a <= 122)
		return(1);
	return(0);
}
