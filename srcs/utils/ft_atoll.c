/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:38:50 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 13:53:24 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

long long	ft_atoll(const char *str)
{
	int			sign;
	long long	ll;

	sign = 1;
	ll = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ll = ll * 10 + (*str - '0');
		str++;
	}
	return (sign * ll);
}

// // Test code
// #include <stdio.h>
// int main()
// {
//     char *str = "-2147483648";
//     long long ll = ft_atoll(str);
//     printf("%lld\n", ll);
//     return (0);
// }