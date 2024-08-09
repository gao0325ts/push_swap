/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 03:00:17 by stakada           #+#    #+#             */
/*   Updated: 2024/08/09 12:28:24 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPARATIONS_H
# define OPARATIONS_H

# include "common.h"

void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);

void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);

void    ra(t_stack **a);
void   rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);

void    rra(t_stack **a);
void   rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);

#endif