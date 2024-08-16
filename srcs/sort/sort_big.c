/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:00:12 by stakada           #+#    #+#             */
/*   Updated: 2024/08/16 22:21:34 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include <stdio.h>
#include <stdbool.h>

bool is_big_upside(t_stack **b, int max)
{
    t_stack *current = *b;
    int i = 0;
    int half_size = max / 2;
    while (i < half_size)
    {
        if (current->coord == max)
        {
            return true;
        }
        current = current->next;
        i++;
    }
    return false;
}

void push_back_to_a(t_stack **a, t_stack **b)
{
    int max = check_size(b);
    int pushed = 0;
    t_stack *target;
    while (check_size(b) > 0)
    {
        target = *b;
        if (target->coord == max)
        {
            pa(a, b);
            max--;
            if (pushed == 1)
            {
                max--;
                pushed = 0;
                sa(a);
            }
            else if (pushed == 2)
            {
                max -= 2;
                pushed = 0;
                sa(a);
                rra(a);
            }
        }
        else if (target->coord == max - 2 && pushed == 1)
        {
            pa(a, b);
            ra(a);
            pushed = 2;
        }
        else if (target->coord == max - 1)
        {
            pa(a, b);
            pushed = 1;
        }
        else if (is_big_upside(b, max))
        {
            rb(b);
        }
        else
            rrb(b);
    }
}

void divide_to_blocks(t_stack **a, t_stack **b, int blkcount, int size, int blk, int blksize)
{
    int range = (size / blk) * blkcount;
    if (blkcount == blk)
        range = size - 3;
    while (check_size(b) < range && blkcount <= blk)
    {
        if ((*a)->coord <= range)
        {
            pb(a, b);
            if (check_size(b) > 1 && (*b)->coord > range - blksize)
                rb(b);
        }
        else
            ra(a);
    }
    blkcount++;
    if (check_size(a) == 3)
        sort_3(a);
    if (blkcount <= blk)
        divide_to_blocks(a, b, blkcount, size, blk, blksize);
}

void sort_big(t_stack **a, t_stack **b)
{
    int blkcount = 1;
    int size = check_size(a);
    int blk;
    if (size <= 100)
        blk = 4;
    else
        blk = 8;
    int blksize = (size / blk) / 2;

    assign_coord(a);
    divide_to_blocks(a, b, blkcount, size, blk, blksize);
    push_back_to_a(a, b);
}
