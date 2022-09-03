/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:08:57 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 14:56:32 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i != nb / i)
		return (0);
	return (i);
}
*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(-1000));
	printf("%d\n", ft_sqrt(21));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(48));
}
*/