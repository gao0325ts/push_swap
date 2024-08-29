/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/29 17:23:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	check_args(int ac, char **av)
{
	char	**args;

	if (ac == 1)
		exit(0);
	if (has_empty_args(av))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!args || !args[0] || !are_digits_only(args, ONESTR)
			|| !are_valid_int(args, ONESTR))
		{
			free_args(args);
			exit_with_error();
		}
		free_args(args);
	}
	else
	{
		if (!are_digits_only(av, MULTISTR) || !are_valid_int(av, MULTISTR))
			exit_with_error();
	}
}

bool	has_empty_args(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return (true);
		i++;
	}
	return (false);
}

bool	are_digits_only(char **strs, int is_onestr)
{
	int	i;
	int	j;

	i = 0;
	if (!is_onestr)
		i++;
	while (strs[i])
	{
		j = 0;
		if (strs[i][j] == '-')
			j++;
		if (!strs[i][j])
			return (false);
		while (strs[i][j])
		{
			if (!ft_isdigit(strs[i][j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	are_valid_int(char **strs, int is_onestr)
{
	int			i;
	long long	num;

	i = 0;
	if (!is_onestr)
		i++;
	while (strs[i])
	{
		num = ft_atoll(strs[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}
