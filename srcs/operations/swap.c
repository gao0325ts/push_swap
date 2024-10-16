/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 00:20:56 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	sa(t_node **a, bool print)
{
	t_node	*first;
	t_node	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	if (print)
		ft_putendl_fd("sa", STDOUT_FILENO);
}

void	sb(t_node **b, bool print)
{
	t_node	*first;
	t_node	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	if (print)
		ft_putendl_fd("sb", STDOUT_FILENO);
}

void	ss(t_node **a, t_node **b, bool print)
{
	sa(a, false);
	sb(b, false);
	if (print)
		ft_putendl_fd("ss", STDOUT_FILENO);
}

// #include <stdio.h>
// #include "init.h"
// int main(int ac, char **av)
// {
//     t_node **a = init_a(ac, av);
//     printf("Before sa:\n");
//     t_node *current = *a;
//     while (current)
//     {
//         printf("%d\n", current->value);
//         current = current->next;
//     }
//     sa(a);
//     // sb(a);
//     printf("After sa:\n");
//     current = *a;
//     while (current)
//     {
//         printf("%d\n", current->value);
//         current = current->next;
//     }
//     clear_nodes(a);
//     free(a);
//     return (0);
// }