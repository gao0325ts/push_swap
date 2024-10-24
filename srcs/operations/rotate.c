/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 03:03:11 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ra(t_node **a, bool print)
{
	t_node	*first;
	t_node	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = *a;
	while (last->next)
		last = last->next;
	*a = first->next;
	first->next = NULL;
	last->next = first;
	if (print)
		ft_putendl_fd("ra", STDOUT_FILENO);
}

void	rb(t_node **b, bool print)
{
	t_node	*first;
	t_node	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	last = *b;
	while (last->next)
		last = last->next;
	*b = first->next;
	first->next = NULL;
	last->next = first;
	if (print)
		ft_putendl_fd("rb", STDOUT_FILENO);
}

void	rr(t_node **a, t_node **b, bool print)
{
	ra(a, false);
	rb(b, false);
	if (print)
		ft_putendl_fd("rr", STDOUT_FILENO);
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

//     puts("-----ra-----");
//     puts("Before:");
//     print_node(*a);
//     ra(a);
//     puts("Atfter:");
//     print_node(*a);

//     puts("-----rb-----");
//     puts("Before:");
//     print_node(*b);
//     rb(b);
//     puts("After:");
//     print_node(*b);

//     puts("-----rr-----");
//     puts("Before:");
//     print_node(*a2);
//     print_node(*b2);
//     rr(a2, b2);
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
