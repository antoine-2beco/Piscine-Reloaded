/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:43:10 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 14:44:58 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	x = 1;
	while (nb > 1)
	{
		x *= nb;
		nb--;
	}
	return (x);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
}*/