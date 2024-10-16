/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:52 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "operations.h"
#include "sort.h"
#include "stack.h"

int	main(int ac, char **av)
{
	t_node		**a;
	t_node		**b;
	long long	size;

	check_args(ac, av);
	if (ac == 2)
		a = init_a(ft_split(av[1], ' '), ONESTR);
	else
		a = init_a(av, MULTISTR);
	b = init_b();
	if (!a || !b)
		exit(1);
	size = get_size(a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size <= 6)
		sort_mini(a, b);
	else
		sort_large(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
