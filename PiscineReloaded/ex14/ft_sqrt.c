/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 16:31:40 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 20:50:51 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		r;

	r = 0;
	i = 1;
	while (r < nb)
	{
		r = i * i;
		i++;
	}
	i = i - 1;
	if ((i * i) != nb)
	{
		i = 0;
	}
	return (i);
}