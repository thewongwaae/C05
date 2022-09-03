/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:16 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 10:56:59 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		output *= nb--;
	return (output);
}

/*
#include <stdio.h>
int main (void)
{
	printf("%i", ft_iterative_factorial(-10));
}
*/