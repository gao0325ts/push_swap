/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_onestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:56:31 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 14:19:14 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**init_a_onestr(char **args)
{
	t_stack	**a;
	int i;

	if (!*args || !args)
		exit_with_error();
	a = create_list_onestr(args);
	assign_value_onestr(a, args);
	if (is_duplicate(a))
		exit_with_error();
	assign_rank(a);
	if (is_sorted(a))
	{
		free_stack(a, NULL);
		exit(0);
	}
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (a);
}

void	assign_value_onestr(t_stack **stack, char **args)
{
	int i;
	t_stack *current;
	
	i = 0;
	current = *stack;
	while (args[i])
	{
		current->value = ft_atoi(args[i]);
		current = current->next;
		i++;
	}
}

