/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:15:17 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "sort.h"

void		assign_value(t_node **stack, char **strs, int is_onestr)
{
	int		i;
	t_node	*current;

	i = 0;
	if (!is_onestr)
		i++;
	current = *stack;
	while (strs[i])
	{
		current->value = ft_atoi(strs[i]);
		current = current->next;
		i++;
	}
}

void	assign_rank(t_node **stack)
{
	int		count;
	t_node	*current;
	t_node	*compare;

	current = *stack;
	while (current)
	{
		count = 1;
		compare = *stack;
		while (compare)
		{
			if (current->value > compare->value)
				count++;
			compare = compare->next;
		}
		current->rank = count;
		current = current->next;
	}
}
