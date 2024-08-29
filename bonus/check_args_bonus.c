/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/29 17:12:02 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_args_bonus(int ac, char **av)
{
	char	**args;

	if (ac == 1)
		exit(0);
	if (has_empty_args(av))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!args || !args[0] || !are_digits_only(args, ONESTR)
			|| !are_valid_int(args, ONESTR))
		{
			free_args(args);
			exit_with_error();
		}
		free_args(args);
	}
	else
	{
		if (!are_digits_only(av, MULTISTR) || !are_valid_int(av, MULTISTR))
			exit_with_error();
	}
}
