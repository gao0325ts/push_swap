/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:52 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 00:10:51 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "operations.h"
#include "sort.h"

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;
	int		size;

	check_args(ac, av);
	a = init_a(ac, av);
	b = init_b();
	// if (!a || !b)
	// 	return (free_stack(a, b));
	size = check_size(a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size <= 6)
		sort_small(a, b);
	else
		sort_big(a, b);
	clear_nodes(a);
	clear_nodes(b);
	free(a);
	free(b);
	return (0);
}
