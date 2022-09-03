/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:48:13 by hwong             #+#    #+#             */
/*   Updated: 2022/09/03 11:27:10 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("\n%i", ft_fibonacci(0));
	printf("\n%i", ft_fibonacci(1));
	printf("\n%i", ft_fibonacci(2));
	printf("\n%i", ft_fibonacci(3));
	printf("\n%i", ft_fibonacci(4));
	printf("\n%i", ft_fibonacci(5));
	printf("\n%i", ft_fibonacci(6));
	//printf("%i", ft_fibonacci_ref(__INT_MAX__));
}
*/