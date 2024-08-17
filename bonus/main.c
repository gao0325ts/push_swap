/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:17:54 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 01:14:03 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;

	check_args(ac, av);
	if (ac == 2)
		a = init_a_bonus_onestr(ft_split(av[1], ' '));
	else
		a = init_a_bonus(ac, av);
	b = init_b();
	if (!a || !b)
		exit(0);
	do_operations(a, b);
	if (is_sorted(a) && *b == NULL)
		ft_putendl_fd("OK", STDOUT_FILENO);
	else
		ft_putendl_fd("KO", STDOUT_FILENO);
	return (0);
}
