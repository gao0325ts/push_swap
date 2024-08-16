/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:14 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 08:43:17 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include "libft.h"

# ifndef T_STACK_DEFINED
#  define T_STACK_DEFINED

typedef struct s_stack
{
	long long		rank;
	int				value;
	struct s_stack	*next;
}					t_stack;
# endif

typedef struct s_info
{
	int				size;
	int				blksize;
	int				blk;
	int				blkcount;
}					t_info;

void				assign_rank(t_stack **stack);
void				exit_with_error(void);
void				clear_nodes(t_stack **list);
void				free_stack(t_stack **a, t_stack **b);

#endif