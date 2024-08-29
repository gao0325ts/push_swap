/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:00:12 by stakada           #+#    #+#             */
/*   Updated: 2024/08/29 17:15:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_large(t_stack **a, t_stack **b)
{
	t_info	*i;

	i = (t_info *)malloc(sizeof(t_info));
	if (!i)
	{
		free_stack(a);
		free_stack(b);
		exit(1);
	}
	i->blkcount = 1;
	i->size = get_size(a);
	if (i->size <= 100)
		i->blk = 4;
	else
		i->blk = 8;
	i->blksize = (i->size / i->blk) / 2;
	divide_to_blocks(a, b, i);
	push_back_to_a(a, b, get_size(b));
	free(i);
}

void	divide_to_blocks(t_stack **a, t_stack **b, t_info *i)
{
	int	range;

	range = (i->size / i->blk) * i->blkcount;
	if (i->blkcount == i->blk)
		range = i->size - 3;
	while (get_size(b) < range && i->blkcount <= i->blk)
	{
		if ((*a)->rank <= range)
		{
			pb(a, b, true);
			if (get_size(b) > 1 && (*b)->rank > range - i->blksize)
				rb(b, true);
		}
		else
			ra(a, true);
	}
	i->blkcount++;
	if (get_size(a) == 3)
		sort_3(a);
	if (i->blkcount <= i->blk)
		divide_to_blocks(a, b, i);
}

void	push_back_to_a(t_stack **a, t_stack **b, int max)
{
	int		pushed;
	t_stack	*target;

	pushed = 0;
	while (get_size(b) > 0)
	{
		target = *b;
		if (target->rank == max)
			handle_max_cases(a, b, &max, &pushed);
		else if (target->rank == max - 2 && pushed == 1)
		{
			pa(a, b, true);
			ra(a, true);
			pushed = 2;
		}
		else if (target->rank == max - 1)
		{
			pa(a, b, true);
			pushed = 1;
		}
		else if (is_largest_near_top(b, max))
			rb(b, true);
		else
			rrb(b, true);
	}
}

void	handle_max_cases(t_stack **a, t_stack **b, int *max, int *pushed)
{
	pa(a, b, true);
	(*max)--;
	if (*pushed == 1)
	{
		(*max)--;
		*pushed = 0;
		sa(a, true);
	}
	else if (*pushed == 2)
	{
		*max -= 2;
		*pushed = 0;
		sa(a, true);
		rra(a, true);
	}
}

bool	is_largest_near_top(t_stack **b, int max)
{
	t_stack	*current;
	int		i;
	int		half_size;

	current = *b;
	i = 0;
	half_size = max / 2;
	while (i < half_size)
	{
		if (current->rank == max)
			return (true);
		current = current->next;
		i++;
	}
	return (false);
}
