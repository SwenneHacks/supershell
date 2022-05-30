/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_last.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 17:18:44 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:23:19 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <liblist.h>

/*
** FT_LSTLAST: Returns the last element of the list.
*/
t_list		*lst_last(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
