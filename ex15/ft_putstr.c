/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:50:13 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 14:52:09 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

/*int	main(void)
{
	ft_putstr("Hello World");
}*/