/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 01:11:17 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_node	**init_a_bonus(char **strs, int is_onestr)
{
	t_node	**a;

	a = create_list(strs, is_onestr);
	assign_value(a, strs, is_onestr);
	if (is_duplicate(a))
	{
		free_stack(a);
		exit_with_error();
	}
	assign_rank(a);
	return (a);
}
