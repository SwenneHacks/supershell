/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 21:43:11 by sofferha      #+#    #+#                 */
/*   Updated: 2022/05/30 17:20:50 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
