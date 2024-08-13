/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 00:31:50 by stakada           #+#    #+#             */
/*   Updated: 2024/08/14 03:13:18 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include <stdio.h>

void	sort_big(t_stack **a, t_stack **b)
{
	int min_coord = 1;
	int max_coord = min_coord + check_size(a) / 8;

    while (check_size(a) > 0)
    {
        t_stack *target = find_by_coord(a, min_coord, max_coord);
		if (!target)
			return ;
		
		t_stack *top_b = *b;
		t_stack *bottom_b = get_last_element(b);

		if (top_b && bottom_b)
		{
			int diff_top = target->coord - top_b->coord;
			int diff_bottom = target->coord - bottom_b->coord;

			if (diff_top < 0)
				diff_top = -diff_top;
			if (diff_bottom < 0)
				diff_bottom = -diff_bottom;
			if (diff_bottom < diff_top)
			{
				rb(b);
			}
		}
		push_min_to_b(a, b, target);
	}
	
	while (check_size(b) > 0)
	{
		t_stack *max = find_by_coord(b, check_size(b), check_size(b));
		push_max_to_a(a, b, max);
	}
}

t_stack *get_last_element(t_stack **stack)
{
    if (*stack == NULL)
        return NULL;

    t_stack *current = *stack;

    while (current->next != NULL)
    {
        current = current->next;
    }

    return current;  // 最後の要素を返す
}

t_stack	*find_by_coord(t_stack **a, int min, int max)
{
	t_stack	*current;

	assign_coord(a);
	current = *a;
	while (current)
	{
		if (current->coord >= min && current->coord <= max)
			break ;
		current = current->next;
	}
	return (current);
}

void push_max_to_a(t_stack **a, t_stack **b, t_stack *max)
{
	int	distance_to_top;
	int	size;

	if (!max)
		return ;
	distance_to_top = find_distance_to_top(*b, max);
	size = check_size(b);
	if (distance_to_top <= size / 2)
	{
		while (*b != max)
			rb(b);
	}
	else
	{
		while (*b != max)
			rrb(b);
	}
	pa(a, b);
}

// #include "init.h"
// #include <stdio.h>

// // void	print_stack(t_stack *stack)
// // {
// // 	while (stack)
// // 	{
// // 		printf(" %d (%d) -> ", stack->value, stack->coord);
// // 		stack = stack->next;
// // 	}
// // 	printf("NULL\n");
// // }

// int	main(int ac, char **av)
// {
// 	if (ac < 8)
// 	{
// 		puts("Error: Too few arguments");
// 		return (1);
// 	}
// 	t_stack **a = init_a(ac, av);
// 	t_stack **b = init_b();
// 	// printf("Before:\n");
// 	// print_stack(*a);
// 	sort_big(a, b);
// 	// printf("After:\n");
// 	// print_stack(*a);
// 	return (0);
// }