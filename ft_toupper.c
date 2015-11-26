/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:25:04 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/25 11:14:39 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a >= 'a' && a <= 'z')
		a = (a - 32);
	return ((int)a);
}

int		main()
{
	ft_putchar((char)ft_toupper('0'));
	return (0);
}
