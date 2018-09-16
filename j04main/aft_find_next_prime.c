/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 00:25:02 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/14 10:42:20 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	if (nb < 1073741827)
	{
		while (nb % i != 0 && i <= nb)
			i++;
		if (i != nb)
			return (ft_find_next_prime(nb + 1));
		else
			return (nb);
	}
	else if (1073741827 <= nb && nb <= 2147483647)
	{
		while (nb % i != 0 && i >= nb)
			i--;
		if (i != nb)
			return (ft_find_next_prime(nb - 1));
		else
			return (nb);
	}
	else
		return (0);
}
int		main(int argc, char *argv[])
{
	printf("%d\n", atoi(argv[1]));
	printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
