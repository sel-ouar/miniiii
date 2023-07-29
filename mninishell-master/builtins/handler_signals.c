/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_signals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-ouar <sel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:47:36 by sel-ouar          #+#    #+#             */
/*   Updated: 2023/07/29 12:04:11 by sel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mshell.h"

// void sigint(int sig)
// {
// 	if (sig == SIGINT)
//     {
//         ioctl(STDIN_FILENO, TIOCSTI, "\n");
//         rl_replace_line("", 0);
//         rl_on_new_line();
//     }
// }

// void sigquit(int sig)
// {
// 	if (sig == SIGQUIT)
//     {
//         printf("cntr+\n");
//         rl_replace_line("", 0);
// 		rl_on_new_line();
// 		rl_redisplay();
//     }
// }
