/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:05 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 10:56:39 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		output *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (output);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(11));
}
*/