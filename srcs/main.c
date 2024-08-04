/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:52 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 15:13:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
// #include "sort.h"

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	check_args(ac, av);
	stack_a = init_a(ac, av);
	stack_b = init_b(ac);
	return (0);
}
