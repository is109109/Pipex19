/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:46:22 by ialousse          #+#    #+#             */
/*   Updated: 2023/06/12 18:05:25 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../utils/utils.h"

/****************PIPEX*****************/
int		open_file(char *file, int in_or_out);
void	ft_free_tab(char **tab);
void	ft_exit(int n);
char	*get_env(char *name, char **env);
char	*get_path(char *cmd, char **env);
void	parant(char **av, int pfd[2], char **env);
void	enfant(char **av, int pfd[2], char **env);
void	exec(char *cmd, char **env);

#endif