/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 18:56:17 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 21:23:40 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		num;
	char	c;

	num = 0;
	while (num <= 9)
	{
		c = num + '0';
		ft_putchar(c);
		num++;
	}
}
