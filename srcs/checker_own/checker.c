/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:11:08 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 18:25:42 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_operations(t_stack **a, t_stack **b)
{
    char *opr;

    while (1)
    {
        opr = get_next_line(STDIN_FILENO);
        if (!opr)
            break;
        if (!ft_strncmp(opr, "rra", 3))
            rra(a);
        else if (!ft_strncmp(opr, "rrb", 3))
            rrb(b);
        else if (!ft_strncmp(opr, "rrr", 3))
            rrr(a, b);
        else if (!ft_strncmp(opr, "ra", 2))
            ra(a);
        else if (!ft_strncmp(opr, "rb", 2))
            rb(b);
        else if (!ft_strncmp(opr, "rr", 2))
            rr(a, b);
        else if (!ft_strncmp(opr, "sa", 2))
            sa(a);
        else if (!ft_strncmp(opr, "sb", 2))
            sb(b);
        else if (!ft_strncmp(opr, "ss", 2))
            ss(a, b);
        else if (!ft_strncmp(opr, "pa", 2))
            pa(a, b);
        else if (!ft_strncmp(opr, "pb", 2))
            pb(a, b);
    }
}

bool is_ok(t_stack **a, t_stack **b)
{
    
}

void	checker(int ac, char **av)
{
	t_stack **a;
	t_stack **b;

	a = init_a(ac, av);
	b = init_b();
	if (!a || !b)
		return (free_stack(a, b), 1);
	do_operations(a, b);
	if (is_ok(a, b))
        ft_putendl_fd("OK", STDOUT_FILENO)
    else
        ft_putendl_fd("KO", STDOUT_FILENO);
}