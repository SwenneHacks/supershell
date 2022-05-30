/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minishell.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:20 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/16 19:00:49 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <errno.h> //errno ENOEM
# include <stdlib.h> //exit free waitpid WEXITSTATUS
# include <stdbool.h> 
# include <readline/readline.h> 
# include <readline/history.h>

typedef struct s_vars
{
	unsigned char	exit_code;
	char			*old_pwd;
	char			*pwd;
	char			**environ;
}	t_vars;

typedef struct pipe_vars
{
	int		*infd;
	int		*outfd;
	char	infd_is_pipe;
	char	outfd_is_pipe;
}	t_pipe_vars;

// typedef struct s_funPtr
// {
// 	char	*cmd;
// 	int		(*func)(char **, t_vars *);
// 	char	is_forkable;
// }	t_funPtr;

// t_funPtr	get_function(const char *name);

#endif