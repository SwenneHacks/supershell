/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:53:06 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:21:57 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libsu.h>

/*
** MY_WORDLEN counts the amout of chars/lettersin a word.
*/
int		ft_wordlen(char const *str, int i, char space)
{
	int len;

	len = 0;
	while (str[i] && str[i] != space)
	{
		len++;
		i++;
	}
	return (len);
}
