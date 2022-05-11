/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minishell.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:20 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/11 15:35:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "/Users/swofferh/Codam/projects/lib/move/libft.h"

# include <errno.h> //errno ENOEM
# include <stdlib.h> //exit free waitpid WEXITSTATUS
# include <stdbool.h> 
# include <readline/readline.h> 
# include <readline/history.h>

typedef struct s_funPtr
{
	char	*cmd;
	int		(*func)(char **, t_vars *);
	char	is_forkable;
}	t_funPtr;

t_funPtr	get_function(const char *name);

/* So, standard this is a singly linked list. But when the list is
 * "finalized", it becomes as doubly linked one so it's easier to parse it.
 * Note that ALL token functions do not support doubly linked lists! */
typedef struct s_token
{
	char			*content;
	int				separated_from_previous;
	enum e_token	tokens;
	struct s_token	*next;
	struct s_token	*prev;
}	t_token;

typedef struct s_vars
{
	unsigned char	exit_code;
	char			*old_pwd;
	char			*pwd;
	char			**environ;
	t_token			*token_list;
}	t_vars;

typedef struct pipe_vars
{
	int		*infd;
	int		*outfd;
	char	infd_is_pipe;
	char	outfd_is_pipe;
}	t_pipe_vars;

#endif