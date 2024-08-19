/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:58:23 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 16:20:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

bool	compare_with_rr(t_stack **a, t_stack **b, char *input)
{
	if (!ft_strcmp(input, "rra\n"))
	{
		rra(a, false);
		return (true);
	}
	else if (!ft_strcmp(input, "rrb\n"))
	{
		rrb(b, false);
		return (true);
	}
	else if (!ft_strcmp(input, "rrr\n"))
	{
		rrr(a, b, false);
		return (true);
	}
	return (false);
}

bool	compare_with_r(t_stack **a, t_stack **b, char *input)
{
	if (!ft_strcmp(input, "ra\n"))
	{
		ra(a, false);
		return (true);
	}
	else if (!ft_strcmp(input, "rb\n"))
	{
		rb(b, false);
		return (true);
	}
	else if (!ft_strcmp(input, "rr\n"))
	{
		rr(a, b, false);
		return (true);
	}
	return (false);
}

bool	compare_with_s(t_stack **a, t_stack **b, char *input)
{
	if (!ft_strcmp(input, "sa\n"))
	{
		sa(a, false);
		return (true);
	}
	else if (!ft_strcmp(input, "sb\n"))
	{
		sb(b, false);
		return (true);
	}
	else if (!ft_strcmp(input, "ss\n"))
	{
		ss(a, b, false);
		return (true);
	}
	return (false);
}

bool	compare_with_p(t_stack **a, t_stack **b, char *input)
{
	if (!ft_strcmp(input, "pa\n"))
	{
		pa(a, b, false);
		return (true);
	}
	else if (!ft_strcmp(input, "pb\n"))
	{
		pb(a, b, false);
		return (true);
	}
	return (false);
}

void	do_operations(t_stack **a, t_stack **b)
{
	char	*input;

	while (1)
	{
		input = get_next_line(STDIN_FILENO);
		if (!input)
			break ;
		if (compare_with_rr(a, b, input) || compare_with_r(a, b, input)
			|| compare_with_s(a, b, input) || compare_with_p(a, b, input))
		{
			free(input);
			continue ;
		}
		free(input);
		free_stack(a);
		free_stack(b);
		exit_with_error();
	}
}
