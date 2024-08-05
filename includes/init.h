/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/05 23:59:29 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "common.h"
# include <stdint.h>
# include <stdlib.h>

void		check_args(int ac, char **av);
void		is_digit_only(char **av);
void		is_int(char **av);
long long	ft_atoll(const char *str);

t_stack		**init_a(int ac, char **av);
t_stack		**init_b(int ac);

t_stack	**create_list(int ac);
t_stack	*create_node(void);
void	add_node(t_stack **list_b, t_stack *new_node);

void check_duplication(t_stack **list);
void    assign_value(t_stack **list, char **av);
void    assign_coord(t_stack **list);

void		exit_with_error(void);
void		clear_nodes(t_stack **stack);

#endif