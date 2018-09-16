/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_is_prime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 00:24:08 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/15 03:58:55 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 2147483647 && nb > 1)
	{
		while (nb % i != 0 && i <= nb)
			i++;
		if (i != nb)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	printf("%d", ft_is_prime(atoi(argv[1])));
	return (0);
}
