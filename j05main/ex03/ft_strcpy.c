/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:03:25 by pgiraud           #+#    #+#             */
/*   Updated: 2018/09/16 01:52:19 by pgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] != '\0')
	{
		dest[j+i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s", ft_strcpy(argv[1], argv[2]));
	else
		return (0);
}
