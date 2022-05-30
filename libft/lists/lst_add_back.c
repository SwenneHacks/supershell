/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_add_back.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 17:21:27 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:39:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <liblist.h>

/*
** FT_LSTADD_BACK: Adds the element new at the end of the list.
*/
void		lst_add_back(t_list **old, t_list *now)
{
	t_list		*head;

	if (!(old))
		return ;
	head = *old;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = now;
	}
	else
		lst_add_front(old, now);
}
