/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:10:21 by stakada           #+#    #+#             */
/*   Updated: 2024/08/29 17:03:45 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

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
				return (true);
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

	if (!*stack)
		return (false);
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
