/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 01:11:17 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 16:21:50 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	**init_a_bonus(int ac, char **av)
{
	t_stack	**a;

	a = create_list(ac);
	assign_value(a, av);
	if (is_duplicate(a))
	{
		free_stack(a);
		exit_with_error();
	}
	assign_rank(a);
	return (a);
}

t_stack	**init_a_bonus_onestr(char **args)
{
	t_stack	**a;

	a = create_list_onestr(args);
	assign_value_onestr(a, args);
	if (is_duplicate(a))
	{
		free_args(args);
		free_stack(a);
		exit_with_error();
	}
	assign_rank(a);
	free_args(args);
	return (a);
}
