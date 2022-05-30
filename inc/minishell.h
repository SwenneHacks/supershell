/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minishell.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:20 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 17:35:05 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <errno.h> //errno ENOEM
# include <stdlib.h> //exit free waitpid WEXITSTATUS
# include <stdbool.h>
# include <readline/readline.h> 
# include <readline/history.h>

# include <libft.h>

typedef struct s_vars
{
	unsigned char	exit_code;
	char			**environ;
	char			**cmd;
	int				ret;
}	t_vars;

typedef struct pipe_vars
{
	int		*in_fd;
	int		*out_fd;
	char	infd_pipe;
	char	outfd_pipe;
}	t_pipe_vars;

#endif