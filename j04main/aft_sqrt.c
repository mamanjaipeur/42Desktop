/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 05:44:19 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/13 23:47:32 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (nb != (i * i))
	{
		i++;
		if (i > nb || i > 46340)
			return (0);
	}
	return (i);
}

int		main(int argc, char *argv[])
{
	printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}
