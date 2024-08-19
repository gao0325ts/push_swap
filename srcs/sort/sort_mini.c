/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:29:01 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:56:55 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_mini(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while (get_size(a) > 3)
	{
		min = find_min(a);
		push_min_to_b(a, b, min);
	}
	sort_3(a);
	while (get_size(b) > 0)
		pa(a, b, true);
}

t_stack	*find_min(t_stack **a)
{
	t_stack	*min;
	t_stack	*current;

	min = *a;
	current = *a;
	while (current)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return (min);
}

void	push_min_to_b(t_stack **a, t_stack **b, t_stack *min)
{
	int	distance_to_top;
	int	size;

	distance_to_top = get_distance_to_top(a, min);
	size = get_size(a);
	if (distance_to_top <= size / 2)
	{
		while (*a != min)
			ra(a, true);
	}
	else
	{
		while (*a != min)
			rra(a, true);
	}
	pb(a, b, true);
}

int	get_distance_to_top(t_stack **a, t_stack *target)
{
	t_stack	*current;
	int		distance;

	current = *a;
	distance = 0;
	while (current && current != target)
	{
		distance++;
		current = current->next;
	}
	return (distance);
}
