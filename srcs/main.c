/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:35 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/11 15:23:36 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void welcomeScreen()
{
        ft_putstr("\n-------------------------------------------------\n");
        ft_putstr("\tWelcome to 42 Minishell  \n");
        ft_putstr("\tPowered by : swofferh and rrinia (@Codam College)\n");
        ft_putstr("-------------------------------------------------\n");
        ft_putstr("\n\n");
		sleep(2);
}

t_funPtr	get_functions(const char *name)
{
	int				i;
	const t_funPtr	funcs[] = {
	{"echo", &exec_echo, 1},
	{"cd", &exec_cd, 0},
	{"pwd", &exec_pwd, 1},
	{"export", &exec_export, 0},
	{"unset", &exec_unset, 0},
	{"env", &exec_env, 1},
	{"exit", &exec_exit, 0},
	{0, NULL, 0}
	};

	i = 0;
	while (funcs[i].key != NULL)
	{
		if (ft_strcmp(funcs[i].key, name) == 0)
			return (funcs[i]);
		i++;
	}
	return (funcs[i]);
}

void	exit_write(char *msg, int code)
{
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
	exit(code);
}

int	main(int ac, char **av, char **envp)
{
	t_vars		v;
	char		*line;
	int			err;
    char        **cmd;
    char        *input;

    welcomeScreen();
	v.token_list = NULL;
	while (true)
	{
		line = readline("\e[1;36mminishell \e[0;32m$> \e[0m");
		add_history(line);
		if (!line)
		{
			// TODO: exit code
			exit_write("needs input", errno);
		}
		else if (*line != 0)
		{
			err = init_vars(line, &v);
			free(line);
			if (err != 0)
			{
				token_free_list(&v.token_list);
				continue ;
			}
			// print_token(vars.token_list);
			if (v.token_list != NULL)
			{
				v.exit_code = execute_line(&v);
				token_free_list(&v.token_list);
			}
			//system("leaks minishell");
		}
	}
	return (0);
}
