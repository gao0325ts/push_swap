/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:41:18 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 18:12:27 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack**    init_a(int ac, char **av)
{
    t_stack  **list_a;
    
    if (!*av || !av)
        exit_with_error();
    list_a = create_list(ac);
    assign_value(list_a, av);
    check_duplication(list_a);
    assign_coord(list_a);
    is_sorted(list_a);
    return (list_a);
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

void is_sorted(t_stack **stack)
{
    int count;
    t_stack *current;

    count = 1;
    current = *stack;
    while (current->next)
    {
        if (current->coord != count)
            return ;
        count++;
        current = current->next;
    }
    exit_with_error();
}
