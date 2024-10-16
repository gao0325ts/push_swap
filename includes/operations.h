/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 03:00:17 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "libft.h"
# include "stack.h"
# include <stdbool.h>
# include <stdlib.h>

void	sa(t_node **a, bool print);
void	sb(t_node **b, bool print);
void	ss(t_node **a, t_node **b, bool print);

void	pa(t_node **a, t_node **b, bool print);
void	pb(t_node **a, t_node **b, bool print);

void	ra(t_node **a, bool print);
void	rb(t_node **b, bool print);
void	rr(t_node **a, t_node **b, bool print);

void	rra(t_node **a, bool print);
void	rrb(t_node **b, bool print);
void	rrr(t_node **a, t_node **b, bool print);

#endif