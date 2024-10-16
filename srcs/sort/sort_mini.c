/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:29:01 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_mini(t_node **a, t_node **b)
{
	t_node	*min;

	while (get_size(a) > 3)
	{
		min = find_min(a);
		push_min_to_b(a, b, min);
	}
	sort_3(a);
	while (get_size(b) > 0)
		pa(a, b, true);
}

t_node	*find_min(t_node **a)
{
	t_node	*min;
	t_node	*current;

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

void	push_min_to_b(t_node **a, t_node **b, t_node *min)
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

int	get_distance_to_top(t_node **a, t_node *target)
{
	t_node	*current;
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
