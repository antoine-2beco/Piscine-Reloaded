/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:35:38 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 15:36:02 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			k++;
		i++;
	}
	return (k);
}