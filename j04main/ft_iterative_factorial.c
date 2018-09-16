/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:57:28 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/15 02:43:48 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int tmp;

	i = 1;
	if (nb >= 0 && nb < 13)
	{
		tmp = nb;
		nb = 1;
		if (tmp < 0)
			return (0);
		while (i <= tmp)
		{
			nb = nb * i;
			i++;
		}
		return (nb);
	}
	else
		return (0);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
