/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_or_less.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:45:31 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:34:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_2(t_stack **a)
{
	int	first;
	int	second;

	first = (*a)->rank;
	second = (*a)->next->rank;
	if (first > second)
		sa(a, true);
}

void	sort_3(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->rank;
	second = (*a)->next->rank;
	third = (*a)->next->next->rank;
	if (first > second && second < third && first < third)
		sa(a, true);
	else if (first > second && second > third && first > third)
	{
		sa(a, true);
		rra(a, true);
	}
	else if (first > second && second < third && first > third)
		ra(a, true);
	else if (first < second && second > third && first < third)
	{
		sa(a, true);
		ra(a, true);
	}
	else if (first < second && second > third && first > third)
		rra(a, true);
}
