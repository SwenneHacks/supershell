/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:00:53 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:19:50 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

/*
** FT_ISALPHA: checks for an alphabetic character
** returns zero if character tests false, non-zero is true.
*/
int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}