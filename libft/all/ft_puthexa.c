/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthexa.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 21:40:49 by sofferha      #+#    #+#                 */
/*   Updated: 2022/05/30 17:20:52 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

void	ft_puthexa(unsigned long n, char c)
{
	if (n > 15)
	{
		ft_puthexa(n / 16, c);
		ft_puthexa(n % 16, c);
	}
	else if (n > 9 && c == 'x')
		ft_putchar(n + 87);
	else if (n > 9 && c == 'X')
		ft_putchar(n + 55);
	else
		ft_putchar(n % 16 + '0');
}
