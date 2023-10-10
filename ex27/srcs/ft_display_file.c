/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:40:20 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/10 16:46:28 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	ft_print_file(char *file_name, int len_file)
{
	char	buff[len_file];
	int		fd;

	fd = open(file_name, O_RDONLY);
	read(fd, buff, len_file);
	buff[len_file] = '\0';
	ft_putstr(buff);
	close(fd);
}

int	ft_file(char *file_name)
{
	int		len_file;
	int		fd;
	char	c;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	len_file = 0;
	while (read(fd, &c, 1))
		len_file++;
	close(fd);
	ft_print_file(file_name, len_file);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (ft_file(argv[1]) == 0)
		ft_putstr("Cannot read file.\n");
	return (0);
}
