/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 05:05:09 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/15 21:55:33 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (-2147483648 <= index && index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else if (2147483647 >= index)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int		main(void)
{
	printf("%d", ft_fibonacci(45));
	return (0);
}
