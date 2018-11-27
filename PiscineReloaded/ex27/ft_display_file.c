/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 20:34:08 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 17:01:13 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	buffer;
	int		lire;

	while ((lire = read(fd, &buffer, 1)) != 0)
	{
		write(1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ft_display_file(fd);
		close(fd);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}
