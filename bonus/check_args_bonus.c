/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 01:16:14 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	check_args_bonus(int ac, char **av)
{
	char **args;
	
	if (ac == 1)
		exit(0);
	if (!*av || !av)
		exit_with_error();
	if (ac != 2 &&(!is_digit_only(av) || !is_int(av)))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!is_digit_only_onestr(args) || !is_int_onestr(args))
			exit_with_error();
	}
}
