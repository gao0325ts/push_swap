/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:41:18 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:20:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**init_a(int ac, char **av)
{
	t_stack	**a;

	a = create_list(ac);
	if (!a)
		return (NULL);
	assign_value(a, av);
	if (is_duplicate(a))
	{
		free_stack(a);
		exit_with_error();
	}
	assign_rank(a);
	if (is_sorted(a))
	{
		free_stack(a);
		exit(0);
	}
	return (a);
}
