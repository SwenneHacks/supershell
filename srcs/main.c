/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:35 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/16 19:05:47 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "/Users/swofferh/Codam/libft/libft.h"

void welcomeScreen()
{
        ft_putstr("\n-------------------------------------------------\n");
        ft_putstr("\tWelcome to 42 Minishell  \n");
        ft_putstr("\tPowered by : swofferh and rrinia (@Codam College)\n");
        ft_putstr("-------------------------------------------------\n");
        ft_putstr("\n\n");
		sleep(2);
}

void	exit_write(char *msg, int code)
{
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
	exit(code);
}

void	track_history(char *line)
{
	
}

int	main(int ac, char **av, char **envp)
{
	t_vars		v;
	char		*line;
	int			ret;
    char        **cmd;
    char        *input;

    welcomeScreen();
	while (1)
	{
		line = readline("\e[1;36mminishell \e[0;32m$> \e[0m");
		track_history(line);
		if (!line)
		{
			
			exit_write("needs input", errno);
		}
		else if (*line != 0)
		{
			//ret = init_vars(line, &v);
			free(line);
			if (ret != 0)
				system("leaks minishell");
		}
	}
	return (0);
}

// t_funPtr	get_functions(const char *name)
// {
// 	int				i;
// 	const t_funPtr	funcs[] = {
// 	{"echo", &function, 1},
// 	{"cd", &function, 0},
// 	{"pwd", &function, 1},
// 	{"export", &function, 0},
// 	{"unset", &function, 0},
// 	{"env", &function, 1},
// 	{"exit", &function, 0},
// 	{0, NULL, 0}
// 	};

// 	i = 0;
// 	while (funcs[i].key != NULL)
// 	{
// 		if (ft_strcmp(funcs[i].key, name) == 0)
// 			return (funcs[i]);
// 		i++;
// 	}
// 	return (funcs[i]);
// }