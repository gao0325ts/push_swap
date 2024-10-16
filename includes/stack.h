/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:14 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:30:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# ifndef t_node_DEFINED
#  define t_node_DEFINED

typedef struct s_stack
{
	long long		rank;
	int				value;
	struct s_stack	*next;
}					t_node;
# endif

#endif