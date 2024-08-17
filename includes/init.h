/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 00:31:07 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "common.h"
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
#include <stdio.h>


void		check_args(int ac, char **av);
bool		is_digit_only(char **av);
bool	is_digit_only_onestr(char **args);
bool		is_int(char **av);
bool	is_int_onestr(char **args);

long long	ft_atoll(const char *str);

t_stack		**init_a(int ac, char **av);
t_stack	**init_a_onestr(char **args);
void	assign_value_onestr(t_stack **stack, char **args);
t_stack		**init_b(void);

t_stack		**create_list(int ac);
t_stack	**create_list_onestr(char **args);
t_stack		*create_node(void);
void		add_node(t_stack **stack, t_stack *new_node);

bool		is_duplicate(t_stack **stack);
void		assign_value(t_stack **stack, char **av);
bool		is_sorted(t_stack **stack);

#endif