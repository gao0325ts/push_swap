/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:59:40 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 18:06:41 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack**    init_b(void)
{
    t_stack  **list_b;
    
    list_b = (t_stack **)malloc(sizeof(t_stack *));
    if (!list_b)
        return (NULL);
    *list_b = NULL;
    return (list_b);
}

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
//     if (ac == 1)
//     {
//         puts("Please input numbers.");
//         return (1);
//     }

//     t_stack **list_a = init_a(ac, av);
//     t_stack **list_b = init_b();

//     puts("---list_a---");
//     print_stack(*list_a);

//     puts("---list_b---");
//     print_stack(*list_b);

//     clear_nodes(list_a);
//     clear_nodes(list_b);
//     free(list_a);
//     free(list_b);
//     return (0);
// }