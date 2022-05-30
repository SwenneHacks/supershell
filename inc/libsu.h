#ifndef LIBSU_H
# define LIBSU_H

# include <libft.h>

// EXTRAS IN LIBRARY

// Added functions:
int			        ft_maxof(int v1, int v2);

// Handling spaces:
int                 ft_isspace(char c);
char                *ft_nospace(char *line);
int					ft_words(char const *str, char space);
int					ft_wordlen(char const *str, int i, char space);

// Returning length:
int                 ft_numlen(int n);
size_t				ft_lenbase(long long nbr, int base);
int     			ft_textsize(const char *str);

// Libft upgrades:

int					ft_isupper(int n);
int					ft_islower(int n);
int                 ft_strclen(char *str, char c);

//  More printing:

void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putendl(char *s);
void				ft_putocta(unsigned long n);
void				ft_puthexa(unsigned long n, char c);
void			    ft_prints(const char *str, ...);
int	                ft_putlen(char c, int len);

#endif