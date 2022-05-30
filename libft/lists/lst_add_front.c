/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_add_front.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 17:20:34 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:40:05 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <liblist.h>

/*
** FT_LSTADD_FRONT: Adds the element new at the beginning of the list.
*/
void		lst_add_front(t_list **old, t_list *now)
{
	if (!(old) || (!(now)))
		return ;
	now->next = *old;
	*old = now;
}
