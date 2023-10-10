/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:09:18 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 14:10:04 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c ++;
	}
}

/*int main(void)
{
	ft_print_numbers();
}*/