/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:21:30 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 14:35:07 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "../libft/libft.h"
// # include "struct.h"
# include <stdint.h>
# include <stdlib.h>

void		check_args(int ac, char **av);
void		is_digit_only(char **av);
void		is_int(char **av);
long long	ft_atoll(const char *str);
// t_stack		**init_a(int ac, char **av);
// t_stack		**set_null(t_stack **list_a, int size);
// t_stack		**set_field_value(t_stack **list_a, char **av);
void		exit_with_error(void);

#endif