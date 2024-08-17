/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:58:23 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 21:37:41 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

bool compare_with_rr(t_stack **a, t_stack **b, char *opr)
{
    if (!ft_strncmp(opr, "rra", 3))
    {
        rra(a);
        return (true);
    }
    else if (!ft_strncmp(opr, "rrb", 3))
    {
        rrb(b, true);
        return (true);
    }
    else if (!ft_strncmp(opr, "rrr", 3))
    {
        rrr(a, b);
        return (true);
    }
    return (false);
}

bool compare_with_r(t_stack **a, t_stack **b, char *opr)
{
    if (!ft_strncmp(opr, "ra", 2))
    {
        ra(a);
        return (true);
    }
    else if (!ft_strncmp(opr, "rb", 2))
    {
        rb(b);
        return (true);
    }
    else if (!ft_strncmp(opr, "rr", 2))
    {
        rr(a, b);
        return (true);
    }
    return (false);
}

bool compare_with_s(t_stack **a, t_stack **b, char *opr)
{
    if (!ft_strncmp(opr, "sa", 2))
    {
        sa(a);
        return (true);
    }
    else if (!ft_strncmp(opr, "sb", 2))
    {
        sb(b);
        return (true);
    }
    else if (!ft_strncmp(opr, "ss", 2))
    {
        ss(a, b);
        return (true);
    }
    return (false);
}

bool compare_with_p(t_stack **a, t_stack **b, char *opr)
{
    if (!ft_strncmp(opr, "pa", 2))
    {
        pa(a, b);
        return (true);
    }
    else if (!ft_strncmp(opr, "pb", 2))
    {
        pb(a, b);
        return (true);
    }
    return (false);
}

void do_operations(t_stack **a, t_stack **b)
{
    char *opr;

    while (1)
    {
        opr = get_next_line(STDIN_FILENO);
        if (!opr)
            break;
        if (compare_with_rr(a, b, opr) ||
            compare_with_r(a, b, opr) ||
            compare_with_s(a, b, opr) ||
            compare_with_p(a, b, opr))
        {
            free(opr);
            continue;
        }
        free(opr);
        exit_with_error();
    }
}