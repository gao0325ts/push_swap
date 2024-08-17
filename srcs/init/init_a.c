/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:41:18 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 00:19:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**init_a(int ac, char **av)
{
	t_stack	**a;

	if (!*av || !av)
		exit_with_error();
	a = create_list(ac);
	assign_value(a, av);
	if (is_duplicate(a))
		exit_with_error();
	assign_rank(a);
	if (is_sorted(a))
	{
		free_stack(a, NULL);
		exit(0);
	}
	return (a);
}

void	assign_value(t_stack **stack, char **av)
{
	int		i;
	t_stack	*current;

	i = 1;
	current = *stack;
	while (av[i])
	{
		current->value = ft_atoi(av[i]);
		current = current->next;
		i++;
	}
}

bool	is_duplicate(t_stack **stack)
{
	t_stack	*current;
	t_stack	*compare;

	current = *stack;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			if (current->value == compare->value)
			{
				free_stack(stack, NULL);
				return (true);
			}
			compare = compare->next;
		}
		current = current->next;
	}
	return (false);
}

bool	is_sorted(t_stack **stack)
{
	int		count;
	t_stack	*current;

	count = 1;
	current = *stack;
	while (current->next)
	{
		if (current->rank != count)
			return (false);
		count++;
		current = current->next;
	}
	return (true);
}
