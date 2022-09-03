/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:42:55 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 11:24:51 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	output;

	count = power;
	output = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (count > 1)
	{
		output *= nb;
		count--;
	}
	return (output);
}

/*
#include <stdio.h>
int main (void)
{
	printf("%i", ft_iterative_power(7, 4));
}
*/