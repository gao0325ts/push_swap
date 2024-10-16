/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:36:11 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
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

void	sort_2(t_node **a);
void	sort_3(t_node **a);

void	sort_mini(t_node **a, t_node **b);
t_node	*find_min(t_node **a);
void	push_min_to_b(t_node **a, t_node **b, t_node *min);
int		get_distance_to_top(t_node **a, t_node *target);

void	sort_large(t_node **a, t_node **b);
void	divide_to_blocks(t_node **a, t_node **b, t_info *i);
void	push_back_to_a(t_node **a, t_node **b, int max);
void	handle_max_cases(t_node **a, t_node **b, int *max, int *pushed);
bool	is_largest_near_top(t_node **b, int max);

void	exit_with_error(void);
int		get_size(t_node **stack);
void	free_stack(t_node **stack);
void	assign_rank(t_node **stack);

#endif