/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:52 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 00:23:13 by stakada          ###   ########.fr       */
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
	if (ac == 2)
		a = init_a_onestr(ft_split(av[1], ' '));
	else
		a = init_a(ac, av);
	b = init_b();
	if (!a || !b)
		return (free_stack(a, b), 1);
	size = get_size(a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size <= 6)
		sort_small(a, b);
	else
		sort_big(a, b);
	free_stack(a, b);
	return (0);
}
