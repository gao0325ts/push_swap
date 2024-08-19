/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:59:40 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:19:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**init_b(void)
{
	t_stack	**b;

	b = (t_stack **)malloc(sizeof(t_stack *));
	if (!b)
		return (NULL);
	*b = NULL;
	return (b);
}
