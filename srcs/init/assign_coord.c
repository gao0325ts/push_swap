/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:33:40 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 14:34:10 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "sort.h"

void    assign_coord(t_stack **stack)
{
    int count;
    t_stack  *current;
    t_stack  *compare;
    
    current = *stack;
    while (current)
    {
        count = 1;
        compare = *stack;
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