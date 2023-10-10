/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:49 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 14:13:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

/*int	main(void)
{
	ft_is_negative(0);
}*/