/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:53:32 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 08:43:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	clear_nodes(t_stack **list)
{
	t_stack	*current;
	t_stack	*next;

	if (!list || !*list)
		return ;
	current = *list;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	free_stack(t_stack **a, t_stack **b)
{
	clear_nodes(a);
	clear_nodes(b);
	free(a);
	free(b);
}
