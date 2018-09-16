/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:31:26 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/13 02:31:40 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		while (power > 1)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	return (0);
}
int		main(void)
{
	printf("%d", ft_recursive_power(5, 3));
	return (0);
}
