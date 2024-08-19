/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_onestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:56:31 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:57:09 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**init_a_onestr(char **args)
{
	t_stack	**a;

	a = create_list_onestr(args);
	if (!a)
		return (NULL);
	assign_value_onestr(a, args);
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
	free_args(args);
	return (a);
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}
