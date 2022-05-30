/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:10:52 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:36:01 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//
# include <libsu.h>
# include <printf.h>
# include <liblist.h>

int					get_next_line(int fd, char **line);
int					get_all_lines(int fd, char **line);
int				    ft_printf(const char *str, ...);

/*
** 					Libft MEMORY functions
*/

void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** 					Libft STRING functions
*/

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
char                *ft_strncpy(char *dst, const char *src, int n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strnstr(const char *haystack, const char *needle, \
size_t len);

/*
** 					My LEN functions
*/

int                 ft_numlen(int n);
size_t				ft_lenbase(long long nbr, int base);
int					ft_wordlen(char const *str, int i, char space);
int                 ft_strclen(char *str, char c);
int     			ft_textsize(const char *str);

/*
** 					Libft 'MAPI' functions
*/

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** 					Libft PUT/PRINT functions
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** 					Extra print functions (outside libft)
*/

void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putendl(char *s);
void				ft_putocta(unsigned long n);
void				ft_puthexa(unsigned long n, char c);
int	                ft_putlen(char c, int len);

/* 
** 					Libft ISTRUE functions (3 extras)
*/

int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isupper(int n);
int					ft_islower(int n);
int                 ft_isspace(char c);
int				    ft_isnumsign(int c);

/*
** 					my WORDS functions
*/

int					ft_words(char const *str, char space);
char                *ft_nospace(char *line);

/*
** 					Operators
*/

int					ft_maxof(int v1, int v2);

#endif
