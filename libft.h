/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:49:59 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/24 13:22:52 by pblondet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
	
	void	ft_putchar(char c);
	void	ft_putstr(char const *s);
	char	*ft_strcpy(char *dst, const char *src);
	char	*ft_strncpy(char *dst, const char *src, size_t n);
	void	ft_putendl(char const *c);
	size_t	ft_strlen(const char *str);
	void	ft_putchar_fd(char c, int fd);
	void	ft_putstr_fd(char const *s, int fd);

#endif



