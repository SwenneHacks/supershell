/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_prints.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 18:00:18 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:20:36 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

static void	ft_unsigned(const char *str, va_list arg)
{
	unsigned int	u;

	if (str[1] == 'u')
	{
		u = (unsigned int)va_arg(arg, unsigned int);
		ft_putnbr(u);
	}
	if (str[1] == 'o')
	{
		u = (unsigned int)va_arg(arg, unsigned int);
		ft_putocta(u);
	}
}

static void	ft_hexadecimal(const char *str, va_list arg)
{
	unsigned long	h;

	if (str[1] == 'p')
	{
		h = (unsigned long)va_arg(arg, void *);
		ft_putstr("0x");
		ft_puthexa(h, 'x');
	}
	if (str[1] == 'x')
	{
		h = va_arg(arg, unsigned int);
		ft_puthexa(h, 'x');
	}
	if (str[1] == 'X')
	{
		h = va_arg(arg, unsigned int);
		ft_puthexa(h, 'X');
		ft_toupper((int)h);
	}
}

static void	ft_conversions(const char *str, va_list arg)
{
	char	*s;
	int		i;

	if (str[1] == '%')
		ft_putchar('%');
	if (str[1] == 's')
	{
		s = va_arg(arg, char *);
		ft_putstr(s);
	}
	if (str[1] == 'c')
	{
		i = va_arg(arg, int);
		ft_putchar(i);
	}
	if (str[1] == 'd' || str[1] == 'i')
	{
		i = va_arg(arg, int);
		ft_putnbr(i);
	}
	if (str[1] == 'u' || str[1] == 'o')
		ft_unsigned(str, arg);
	if (str[1] == 'p' || str[1] == 'x' || str[1] == 'X')
		ft_hexadecimal(str, arg);
}

/* Simplified version of printf without flags */
void		ft_prints(const char *str, ...)
{
	unsigned int	index;
	va_list			arg;

	index = 0;
	va_start(arg, str);
	while (str[index])
	{
		while (str[index] != '%' && str[index])
		{
			write(1, &str[index], 1);
			index++;
		}
		if (str[index])
		{
			ft_conversions(str + index, arg);
			index = index + 2;
		}
	}
	return ;
}
