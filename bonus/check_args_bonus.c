/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 17:06:06 by stakada          ###   ########.fr       */
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
		if (!args || !args[0] || !are_digits_only_onestr(args)
			|| !are_valid_int_onestr(args))
		{
			free_args(args);
			exit_with_error();
		}
		free_args(args);
	}
	else
	{
		if (!are_digits_only(av) || !are_valid_int(av))
			exit_with_error();
	}
}
