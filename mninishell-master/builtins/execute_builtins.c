/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_builtins.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-ouar <sel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:28:18 by sel-ouar          #+#    #+#             */
/*   Updated: 2023/07/29 16:24:08 by sel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mshell.h"

int    execute_builtins(t_lexer *cmd)
{
    int i;

    i = 0;
    if(ft_strcmp(cmd->cmd[0], "pwd") == 0)
       { 
            i++;
            ft_pwd();
       }
    if(ft_strcmp(cmd->cmd[0], "echo") == 0)
        ft_echo(&cmd->cmd[0]);
    if(ft_strcmp(cmd->cmd[0], "exit") == 0)
    {
        i++;
        ft_exit(&cmd->cmd[0]);
    }
    // if(ft_strcmp(cmd->cmd[0], "cd") == 0)
    // {
    //     i++;
    //     ft_cd(, &cmd->cmd[0]);
    // }
    return (i);
}