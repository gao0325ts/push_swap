/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_or_less.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:45:31 by stakada           #+#    #+#             */
/*   Updated: 2024/08/16 22:13:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void sort_2(t_stack **a)
{    
    int first = (*a)->coord;
    int second = (*a)->next->coord;

    if (first > second)
        sa(a);
}

void sort_3(t_stack **a)
{
    int first = (*a)->coord;
    int second = (*a)->next->coord;
    int third = (*a)->next->next->coord;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third && first > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}


// #include "init.h"
// #include <stdio.h>

// void print_stack(t_stack *stack)
// {
//     while (stack)
//     {
//         printf("%d (%d) -> ", stack->value, stack->coord);
//         stack = stack->next;
//     }
//     printf("NULL\n");
// }

// int main(int ac, char **av)
// {
//     if (ac != 3 && ac != 4)
//     {
//         puts("Please input 3 numbers.");
//         return 1;
//     }
//     t_stack **a1 = init_a(ac, av);
//     puts("---Before---");
//     print_stack(*a1);
//     puts("---sort---");
//     if (ac == 3)
//         sort_2(a1);
//     else
//         sort_3(a1);
//     puts("---After---");
//     print_stack(*a1);

//     return 0;
// }
