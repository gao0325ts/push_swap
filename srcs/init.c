/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:41:18 by stakada           #+#    #+#             */
/*   Updated: 2024/08/06 00:10:38 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include <stdio.h>

t_stack**    init_a(int ac, char **av)
{
    t_stack  **list_a;
    
    list_a = create_list(ac);
    assign_value(list_a, av);
    check_duplication(list_a);
    assign_coord(list_a);
    return (list_a);
}

t_stack**    init_b(int ac)
{
    t_stack  **list_b;
    
    list_b = create_list(ac);
    return (list_b);
}

void    assign_value(t_stack **list, char **av)
{
    int i;
    t_stack  *current;

    i = 1;
    current = *list;
    while (av[i])
    {
        current->value = ft_atoi(av[i]);
        current = current->next;
        i++;
    }
}

void    assign_coord(t_stack **list)
{
    int count;
    t_stack  *current;
    t_stack  *compare;
    
    current = *list;
    while (current)
    {
        count = 1;
        compare = *list;
        while (compare)
        {
            if (current->value > compare->value)
                count++;
            compare = compare->next;
        }
        current->coord = count;
        current = current->next;
    }
}

void check_duplication(t_stack **list)
{
    t_stack *current;
    t_stack *compare;
    
    current = *list;
    while (current)
    {
        compare = current->next;
        while (compare)
        {
            if (current->value == compare->value)
                exit_with_error();
            compare = compare->next;
        }
        current = current->next;
    }
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     t_stack **list_a = init_a(ac, av);
//     t_stack **list_b = init_b(ac);
//     t_stack *current;

//     current = *list_a;
//     puts("---list_a---");
//     while (current)
//     {
//         printf("value: %d, coord: %d\n", current->value, current->coord);
//         current = current->next;
//     }

//     current = *list_b;
//     puts("---list_b---");
//     while (current)
//     {
//         printf("value: %d, coord: %d\n", current->value, current->coord);
//         current = current->next;
//     }

//     return (0);
// }