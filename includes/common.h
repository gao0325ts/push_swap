/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:14 by stakada           #+#    #+#             */
/*   Updated: 2024/08/06 03:05:27 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include "../libft/libft.h"

# ifndef T_STACK_DEFINED
#  define T_STACK_DEFINED
typedef struct s_stack
{
	int				coord;
	int				value;
	struct s_stack	*next;
}					t_stack;
# endif

void	exit_with_error(void);
void	clear_nodes(t_stack **list);

#endif