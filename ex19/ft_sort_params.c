/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:36:48 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/11 14:46:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	ft_putarray(char *argv[], int argc)
{
	int	i;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < (argc))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*a;
	char	*b;

	i = 1;
	j = 2;
	while (i != (argc))
	{
		while ((j < (argc)) && (i != (argc)))
		{
			a = argv[i];
			b = argv[j];
			if (ft_strcmp(a, b) > 0)
			{
				argv[i] = b;
				argv[j] = a;
			}
			j++;
		}
		i++;
		j = i;
	}
	ft_putarray(argv, argc);
	return (0);
}
