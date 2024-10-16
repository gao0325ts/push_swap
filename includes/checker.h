/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 08:49:32 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "get_next_line.h"
# include "init.h"
# include "operations.h"
# include "stack.h"

t_node	**init_a_bonus(char **strs, int is_onestr);
void	check_args_bonus(int ac, char **av);

void	do_operations(t_node **a, t_node **b);
bool	compare_with_rr(t_node **a, t_node **b, char *opr);
bool	compare_with_r(t_node **a, t_node **b, char *opr);
bool	compare_with_s(t_node **a, t_node **b, char *opr);
bool	compare_with_p(t_node **a, t_node **b, char *opr);
int		ft_strcmp(char *s1, char *s2);

#endif
