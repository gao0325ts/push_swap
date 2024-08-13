/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:36:11 by stakada           #+#    #+#             */
/*   Updated: 2024/08/14 03:21:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "common.h"
# include "operations.h"
# include "init.h"
# include <stdlib.h>
# include <limits.h>

int check_size(t_stack **stack_a);

void sort_2(t_stack **a);
void sort_3(t_stack **a);

void sort_small(t_stack **a, t_stack **b);
void push_min_to_b(t_stack **a, t_stack **b, t_stack *min);

t_stack *find_min(t_stack **a);
int		find_distance_to_top(t_stack *a, t_stack *target);
int check_distance_to_end(t_stack *a, int size, t_stack *target);

void	sort_big(t_stack **a, t_stack **b);
t_stack *get_last_element(t_stack **stack);
t_stack	*find_by_coord(t_stack **a, int min, int max);
void push_max_to_a(t_stack **a, t_stack **b, t_stack *max);
t_stack *find_max(t_stack **b);

#endif