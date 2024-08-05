/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 00:20:56 by stakada           #+#    #+#             */
/*   Updated: 2024/08/06 03:09:49 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oparations.h"

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
}

void ss(t_stack **a, t_stack **b)
{
    sa(a);
    sb(b);
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