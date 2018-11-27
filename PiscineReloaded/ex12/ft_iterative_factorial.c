/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 11:35:01 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 12:18:49 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = nb;
	res = nb;
	if (nb > 12 || nb < 0)
	{
		res = 0;
	}
	else if (nb == 0 || nb == 1)
	{
		res = 1;
	}
	else
	{
		while (i > 1)
		{
			res = res * (i - 1);
			i--;
		}
	}
	return (res);
}
