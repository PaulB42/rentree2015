/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblondet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:49:59 by pblondet          #+#    #+#             */
/*   Updated: 2015/11/27 16:48:54 by pblondet         ###   ########.fr       */
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
	void	ft_bzero(void *s, size_t n);
	int		ft_isalnum(int c);
	int		ft_isalpha(int c);
	int		ft_isascii(int c);
	int		ft_isdigit(int c);
	int		ft_isprint(int c);
	char	*ft_itoa(int n);
	void	*ft_memalloc(size_t size);
	void	*ft_memcpy(void *dst, const void *src, size_t n);
	void	ft_memdel(void **ap);
	void	*ft_memmove(void *dest, const void *src, size_t n);
	void	*ft_memset(void *s, int c, size_t n);
	void	ft_putendl_fd(char const *c, int fd);
	void	ft_putnbr(int c);
	char	*ft_strchr(const char *s, int c);
	void	ft_strclr(char *s);
	int		ft_strcmp(const char *s1, const char *s2);
	void	ft_strdel(char **as);
	char	*ft_strdup(const char *s);
	void	ft_striter(char *s, void (*f)(char *));
	char	*ft_strjoin(const char *s1, const char *s2);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	char	*ft_strnew(size_t size);
	char	**ft_strsplit(const char *s, char c);
	char	*ft_strsub(const char *s, unsigned int start, size_t len);
	char	*ft_strtrim(const char *s);
	int		ft_tolower(int c);
	int		ft_toupper(int c);
	char	ft_strrev(char *str);

#endif



