/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:14 by stakada           #+#    #+#             */
/*   Updated: 2024/08/14 18:42:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include "../libft/libft.h"

# ifndef T_STACK_DEFINED
#  define T_STACK_DEFINED
typedef struct s_stack
{
	int				coord; // FIXME: change to long or ll (because of range of int)
	int				value;
	struct s_stack	*next;
}					t_stack;
# endif

void    assign_coord(t_stack **stack);
void	exit_with_error(void);
void	clear_nodes(t_stack **list);

// TODO: remove
void print_stack(t_stack *stack);

#endif