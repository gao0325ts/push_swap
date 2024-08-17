/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 20:18:43 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
#define INIT_H

#include "common.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void check_args(int ac, char **av);
bool is_digit_only(char **av);
bool is_int(char **av);
long long ft_atoll(const char *str);

t_stack **init_a(int ac, char **av);
t_stack **init_b(void);

t_stack **create_list(int ac);
t_stack *create_node(void);
void add_node(t_stack **stack, t_stack *new_node);

bool is_duplicate(t_stack **stack);
void assign_value(t_stack **stack, char **av);
bool is_sorted(t_stack **stack);

#endif