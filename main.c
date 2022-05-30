/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 10:49:35 by swofferh      #+#    #+#                 */
/*   Updated: 2022/05/30 18:30:30 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));	
}

void welcomeScreen()
{
        ft_putstr("\n--------------------------------------------\n");
		ft_putstr("	┌─┐┌─┐┬─┐┬┬ ┬┬┌┐┌┬┌─┬  ┌─┐\n");
		ft_putstr("	├─┘├┤ ├┬┘││││││││├┴┐│  ├┤ \n");
		ft_putstr("	┴  └─┘┴└─┴└┴┘┴┘└┘┴ ┴┴─┘└─┘\n");
        ft_putstr("	Welcome to 42's Minishell!\n");
        ft_putstr("	Powered by : swofferh and\n");
		ft_putstr("	rrinia at Codam College ©\n");
        ft_putstr("--------------------------------------------\n");
        ft_putstr("\n\n");
		//sleep(2);
}

void	exit_write(char *msg, int code)
{
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
	exit(code);
}


int	main()
{
	char        *input;

    welcomeScreen();
	while (1)
	{
		input = readline("\e[1;36mminishell \e[0;32m$> \e[0m");
		//track_history(input);
		//check_quotes(input, '"');
		ft_printf(">%s\n", input);
	}
	return (0);
}
