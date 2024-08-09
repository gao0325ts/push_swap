/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 03:03:11 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 12:05:02 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void    ra(t_stack **a)
{
    t_stack *first;
    t_stack *last;

    if (!a || !*a || !(*a)->next)
        return;
    first = *a;
    last = *a;
    while (last->next)
        last = last->next;
    *a = first->next;
    first->next = NULL;
    last->next = first;
}

void   rb(t_stack **b)
{
    t_stack *first;
    t_stack *last;

    if (!b || !*b || !(*b)->next)
        return;
    first = *b;
    last = *b;
    while (last->next)
        last = last->next;
    *b = first->next;
    first->next = NULL;
    last->next = first;
}

void    rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
}

// #include <stdio.h>
// #include "init.h"

// void print_stack(t_stack *stack)
// {
//     while (stack)
//     {
//         printf("( [%d] %d ) -> ", stack->coord, stack->value);
//         stack = stack->next;
//     }
//     printf("NULL\n");
// }

// int main(int ac, char **av)
// {
//     t_stack **a = init_a(ac, av);
//     t_stack **b = init_a(ac, av);
//     t_stack **a2 = init_a(ac, av);
//     t_stack **b2 = init_a(ac, av);

//     puts("-----ra-----");
//     puts("Before:");
//     print_stack(*a);
//     ra(a);
//     puts("Atfter:");
//     print_stack(*a);

//     puts("-----rb-----");
//     puts("Before:");
//     print_stack(*b);    
//     rb(b);
//     puts("After:");
//     print_stack(*b);

//     puts("-----rr-----");
//     puts("Before:");
//     print_stack(*a2);
//     print_stack(*b2);
//     rr(a2, b2);
//     puts("After:");
//     print_stack(*a2);
//     print_stack(*b2);

//     clear_nodes(a);
//     free(a);
//     clear_nodes(b);
//     free(b);
//     clear_nodes(a2);
//     free(a2);
//     clear_nodes(b2);
//     free(b2);
//     return 0;
// }

