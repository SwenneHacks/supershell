/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   liblist.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:10:52 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:42:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H

# include <libft.h>

typedef struct s_list	t_list;

struct				s_list
{
	void			*content;
	t_list			*next;
	t_list			*prev;
};

void				lst_reverse(t_list **node);
void				lst_add_front(t_list **old, t_list *now);
void				lst_add_back(t_list **old, t_list *now);
void				*lst_move_front(t_list **node, void *content);
t_list				*lst_move_back(t_list **node, void *content);
void				lst_clear(t_list **node, void (*del)(void*));
void				lst_del_one(t_list *node, void (*del)(void*));
void				lst_itter(t_list *node, void (*f)(void *));
size_t				lst_size(t_list *node);
t_list				*lst_last(t_list *node);
t_list				*lst_new(void *content);
t_list				*lst_map(t_list *node, void *(*f)(void *), void (*del)\
(void *));

#endif
