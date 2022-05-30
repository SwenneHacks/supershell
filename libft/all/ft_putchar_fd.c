/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:05:21 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:20:38 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

/*
** FT_PUTCHAR_FD: Outputs the character c to given file descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
