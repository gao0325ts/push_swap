/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:17:54 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 22:04:38 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	**a;
	t_stack	**b;

	check_args(ac, av);
	a = init_a(ac, av);
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
