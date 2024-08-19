/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:36:11 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 16:00:00 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "operations.h"
# include "stack.h"

typedef struct s_info {
	int	size;
	int	blksize;
	int	blk;
	int	blkcount;
}		t_info;

void	sort_2(t_stack **a);
void	sort_3(t_stack **a);

void	sort_mini(t_stack **a, t_stack **b);
t_stack	*find_min(t_stack **a);
void	push_min_to_b(t_stack **a, t_stack **b, t_stack *min);
int		get_distance_to_top(t_stack **a, t_stack *target);

void	sort_large(t_stack **a, t_stack **b);
void	divide_to_blocks(t_stack **a, t_stack **b, t_info *i);
void	push_back_to_a(t_stack **a, t_stack **b, int max);
void	handle_max_cases(t_stack **a, t_stack **b, int *max, int *pushed);
bool	is_largest_near_top(t_stack **b, int max);

void	exit_with_error(void);
int		get_size(t_stack **stack);
void	free_stack(t_stack **stack);
void	assign_rank(t_stack **stack);

#endif