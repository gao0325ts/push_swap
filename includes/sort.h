/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:36:11 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 07:33:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "common.h"
# include "operations.h"
# include <stdbool.h>

int		check_size(t_stack **stack_a);

void	sort_2(t_stack **a);
void	sort_3(t_stack **a);

void	sort_small(t_stack **a, t_stack **b);
int		check_distance_to_end(t_stack *a, int size, t_stack *target);
t_stack	*find_min(t_stack **a);
void	push_min_to_b(t_stack **a, t_stack **b, t_stack *min);
int		find_distance_to_top(t_stack *a, t_stack *target);

bool	is_big_upside(t_stack **b, int max);
void	push_back_to_a(t_stack **a, t_stack **b);
void	divide_to_blocks(t_stack **a, t_stack **b, int blkcount, int size,
			int blk, int blksize);
void	sort_big(t_stack **a, t_stack **b);

#endif