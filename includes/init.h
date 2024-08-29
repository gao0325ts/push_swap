/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/29 17:10:21 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "libft.h"
# include "stack.h"
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>

# define ONESTR 1
# define MULTISTR 0

void		check_args(int ac, char **av);
bool		has_empty_args(char **av);
bool		are_digits_only(char **strs, bool is_onestr);
bool		are_valid_int(char **strs, bool is_onestr);

// bool		are_digits_only_onestr(char **args);
// bool		are_valid_int_onestr(char **args);

long long	ft_atoll(const char *str);

t_stack		**init_a_onestr(char **args);
void		assign_value_onestr(t_stack **stack, char **args);
t_stack		**init_a(int ac, char **av);
void		assign_value(t_stack **stack, char **av);
void		assign_rank(t_stack **stack);
void		free_args(char **args);

bool		is_duplicate(t_stack **stack);
bool		is_sorted(t_stack **stack);

t_stack		**init_b(void);

t_stack		**create_list_onestr(char **args);
t_stack		**create_list(int ac);
t_stack		*create_node(void);
void		add_node(t_stack **stack, t_stack *new_node);

void		exit_with_error(void);
void		free_stack(t_stack **stack);

#endif