/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <tchewa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:31:26 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/27 15:17:31 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_strcat(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
size_t		ft_strlen(const char *str);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_atoi(const char *str);
char		*ft_strdup(const char *str);
void		ft_putchar(char c);
void		ft_putstr(const char *str);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		*ft_memset(void *b, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strtrim(char const *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strmap(char const *s, char(*f)(char));
char		*ft_strmapi(char const *s, char(*f)(unsigned int, char));
size_t		ft_strlcat(char *dst, const char *src, size_t destsize);

#endif
