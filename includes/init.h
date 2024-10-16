/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:54 by stakada          ###   ########.fr       */
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
bool		are_digits_only(char **strs, int is_onestr);
bool		are_valid_int(char **strs, int is_onestr);

long long	ft_atoll(const char *str);

t_node	**init_a(char **strs, int is_onestr);
void		assign_value(t_node **stack, char **strs, int is_onestr);
void		assign_rank(t_node **stack);
void		free_args(char **args);

bool		is_duplicate(t_node **stack);
bool		is_sorted(t_node **stack);

t_node		**init_b(void);

t_node	**create_list(char **strs, int is_onestr);
t_node		*create_node(void);
void		add_node(t_node **stack, t_node *new_node);

void		exit_with_error(void);
void		free_stack(t_node **stack);

#endif