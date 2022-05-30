/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:22:16 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:19:44 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

/*
** FT_BZERO: write zero-valued bytes
** writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
