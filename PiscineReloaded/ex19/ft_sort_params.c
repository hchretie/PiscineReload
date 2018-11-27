/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <hchretie@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 22:46:37 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 15:33:44 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	f_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		f_cmpstr(char *str1, char *str2)
{
	while ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int		main(int argc, char **argv)
{
	int		j;
	char	*temp;

	j = 1;
	if (argc > 0)
	{
		while (j < argc - 1)
		{
			if ((f_cmpstr(argv[j], argv[j + 1])) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				j = 1;
			}
			else
				j++;
		}
		j = 0;
		while (++j < argc)
			f_putstr(argv[j]);
	}
}
