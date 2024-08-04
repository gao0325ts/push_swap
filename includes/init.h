/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 15:36:46 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "../libft/libft.h"
# include "struct.h"
# include <stdint.h>
# include <stdlib.h>

void		check_args(int ac, char **av);
void		is_digit_only(char **av);
void		is_int(char **av);
long long	ft_atoll(const char *str);

t_stack		**init_a(int ac, char **av);
t_stack		**init_b(int ac);

void		exit_with_error(void);
void		clear_nodes(t_stack **stack);

#endif