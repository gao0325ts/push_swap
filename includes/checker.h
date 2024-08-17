/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 08:49:32 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 01:16:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "common.h"
# include "get_next_line.h"
# include "init.h"
# include "operations.h"
# include <stdlib.h>
# include <unistd.h>

void	checker(int ac, char **av);

void	do_operations(t_stack **a, t_stack **b);
bool	compare_with_rr(t_stack **a, t_stack **b, char *opr);
bool	compare_with_r(t_stack **a, t_stack **b, char *opr);
bool	compare_with_s(t_stack **a, t_stack **b, char *opr);
bool	compare_with_p(t_stack **a, t_stack **b, char *opr);
int	ft_strcmp(char *s1, char *s2);

t_stack	**init_a_bonus(int ac, char **av);
void	assign_value(t_stack **stack, char **av);
bool	is_duplicate(t_stack **stack);

t_stack	**init_a_bonus(int ac, char **av);
t_stack	**init_a_bonus_onestr(char **args);
void	check_args_bonus(int ac, char **av);


#endif
