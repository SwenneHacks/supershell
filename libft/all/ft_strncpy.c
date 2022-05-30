/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:37:02 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:21:39 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

/*
** FT_STR_N_CPY
** Copies a string until a given 'stop' (number of times/len).
*/
char		*ft_strncpy(char *dst, const char *src, int n)
{
	int		index;

	index = 0;
	while (index < n)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
