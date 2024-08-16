/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:14 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 07:39:09 by stakada          ###   ########.fr       */
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

void				assign_rank(t_stack **stack);
void				exit_with_error(void);
void				clear_nodes(t_stack **list);

#endif