/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:48:49 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	pa(t_node **a, t_node **b, bool print)
{
	t_node	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (print)
		ft_putendl_fd("pa", STDOUT_FILENO);
}

void	pb(t_node **a, t_node **b, bool print)
{
	t_node	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (print)
		ft_putendl_fd("pb", STDOUT_FILENO);
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

//     puts("-----pa-----");
//     puts("Before:");
//     print_node(*a);
//     print_node(*b);
//     pa(a, b);
//     puts("Atfter:");
//     print_node(*a);
//     print_node(*b);

//     puts("-----pb-----");
//     puts("Before:");
//     print_node(*a2);
//     print_node(*b2);
//     pb(a2, b2);
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
