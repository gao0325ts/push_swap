/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:29:01 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 07:58:49 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_small(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while (check_size(a) > 3)
	{
		min = find_min(a);
		push_min_to_b(a, b, min);
	}
	sort_3(a);
	while (check_size(b) > 0)
		pa(a, b);
}

int	check_distance_to_end(t_stack *a, int size, t_stack *target)
{
	int	distance;

	distance = 0;
	while (a && a != target)
	{
		distance++;
		a = a->next;
	}
	if (distance > size / 2)
		return (size - distance);
	return (distance);
}

t_stack	*find_min(t_stack **a)
{
	t_stack	*min;

	assign_rank(a);
	min = *a;
	while (min)
	{
		if (min->rank == 1)
			break ;
		min = min->next;
	}
	return (min);
}

void	push_min_to_b(t_stack **a, t_stack **b, t_stack *min)
{
	int	distance_to_top;
	int	size;

	if (!min)
		exit(0);
	distance_to_top = find_distance_to_top(*a, min);
	size = check_size(a);
	if (distance_to_top <= size / 2)
	{
		while (*a != min)
			ra(a);
	}
	else
	{
		while (*a != min)
			rra(a);
	}
	pb(a, b);
}

int	find_distance_to_top(t_stack *a, t_stack *target)
{
	int	distance;

	distance = 0;
	while (a && a != target)
	{
		distance++;
		a = a->next;
	}
	return (distance);
}

// #include "init.h"
// #include <stdio.h>
// void	print_stack(t_stack *stack)
// {
// 	while (stack)
// 	{
// 		printf("%d (%d) -> ", stack->value, stack->rank);
// 		stack = stack->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(int ac, char **av)
// {
// 	t_stack	**a1;
// 	t_stack	**b1;

// 	if (!(ac >= 5 && ac <= 7))
// 	{
// 		puts("Please input 4 ~ 6 numbers.");
// 		return (1);
// 	}
// 	a1 = init_a(ac, av);
// 	b1 = init_b();
// 	puts("---Before---");
// 	print_stack(*a1);
// 	print_stack(*b1);
// 	puts("---sort---");
// 	sort_small(a1, b1);
// 	puts("---After---");
// 	print_stack(*a1);
// 	print_stack(*b1);
// 	return (0);
// }
