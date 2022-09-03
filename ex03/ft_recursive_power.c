/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:51:16 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 11:24:42 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	output;

	output = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (output);
}

/*
#include <stdio.h>
int main (void)
{
	printf("%i", ft_recursive_power(3, 3));
}
*/