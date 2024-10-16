/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:35:24 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rra(t_node **a, bool print)
{
	t_node	*last;
	t_node	*second_last;

	if (!*a || !(*a)->next)
		return ;
	last = *a;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		ft_putendl_fd("rra", STDOUT_FILENO);
}

void	rrb(t_node **b, bool print)
{
	t_node	*last;
	t_node	*second_last;

	if (!*b || !(*b)->next)
		return ;
	last = *b;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	if (print)
		ft_putendl_fd("rrb", STDOUT_FILENO);
}

void	rrr(t_node **a, t_node **b, bool print)
{
	rra(a, false);
	rrb(b, false);
	if (print)
		ft_putendl_fd("rrr", STDOUT_FILENO);
}

// #include <stdio.h>
// #include "init.h"

// void print_node(t_node *stack)
// {
//     while (stack)
//     {
//         printf("( [%d] %d ) -> ", stack->rank, stack->value);
//         stack = stack->next;
//     }
//     printf("NULL\n");
// }

// int main(int ac, char **av)
// {
//     t_node **a = init_a(ac, av);
//     t_node **b = init_a(ac, av);
//     t_node **a2 = init_a(ac, av);
//     t_node **b2 = init_a(ac, av);

//     puts("-----rra-----");
//     puts("Before:");
//     print_node(*a);
//     rra(a);
//     puts("Atfter:");
//     print_node(*a);

//     puts("-----rrb-----");
//     puts("Before:");
//     print_node(*b);
//     rrb(b);
//     puts("After:");
//     print_node(*b);

//     puts("-----rrr-----");
//     puts("Before:");
//     print_node(*a2);
//     print_node(*b2);
//     rrr(a2, b2);
//     puts("After:");
//     print_node(*a2);
//     print_node(*b2);

//     clear_nodes(a);
//     free(a);
//     clear_nodes(b);
//     free(b);
//     clear_nodes(a2);
//     free(a2);
//     clear_nodes(b2);
//     free(b2);
//     return (0);
// }