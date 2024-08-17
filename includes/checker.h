/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 08:49:32 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 20:37:38 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H

#include "common.h"
#include "get_next_line.h"
#include "init.h"
#include "operations.h"
#include <stdlib.h>
#include <unistd.h>

void checker(int ac, char **av);

void do_operations(t_stack **a, t_stack **b);
bool compare_with_rr(t_stack **a, t_stack **b, char *opr);
bool compare_with_r(t_stack **a, t_stack **b, char *opr);
bool compare_with_s(t_stack **a, t_stack **b, char *opr);
bool compare_with_p(t_stack **a, t_stack **b, char *opr);

#endif