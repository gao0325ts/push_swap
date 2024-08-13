/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 00:20:56 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 14:32:33 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void sa(t_stack **a)
{
    t_stack *first;
    t_stack *second;

    if (!a || !*a || !(*a)->next)
        return;
    first = *a;
    second = (*a)->next;
    first->next = second->next;
    second->next = first;
    *a = second;
    ft_putendl_fd("sa", STDOUT_FILENO);
}

void sb(t_stack **b)
{
    t_stack *first;
    t_stack *second;

    if (!b || !*b || !(*b)->next)
        return;
    first = *b;
    second = (*b)->next;
    first->next = second->next;
    second->next = first;
    *b = second;
    ft_putendl_fd("sb", STDOUT_FILENO);
}

void ss(t_stack **a, t_stack **b)
{
    sa(a);
    sb(b);
    ft_putendl_fd("ss", STDOUT_FILENO);
}

// #include <stdio.h>
// #include "init.h"
// int main(int ac, char **av)
// {
//     t_stack **a = init_a(ac, av);
//     printf("Before sa:\n");
//     t_stack *current = *a;
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
//     return 0;
// }