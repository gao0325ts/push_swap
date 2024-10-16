/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:41:18 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_node	**init_a(char **strs, int is_onestr)
{
	t_node	**a;

	a = create_list(strs, is_onestr);
	if (!a)
		return (NULL);
	assign_value(a, strs, MULTISTR);
	if (is_duplicate(a))
	{
		free_stack(a);
		exit_with_error();
	}
	assign_rank(a);
	if (is_sorted(a))
	{
		free_stack(a);
		exit(0);
	}
	return (a);
}
