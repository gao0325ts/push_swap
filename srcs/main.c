/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:52 by stakada           #+#    #+#             */
/*   Updated: 2024/08/14 03:21:10 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "sort.h"
#include "operations.h"

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	int size;

	check_args(ac, av);
	stack_a = init_a(ac, av);
	stack_b = init_b();
	// if (!stack_a || !stack_b)
	// 	return (free_stack(stack_a, stack_b));
	size = check_size(stack_a);
	if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size <= 6)
		sort_small(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
	return (0);
}
