/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 16:53:04 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 19:31:53 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*rangi;
	int		i;
	int		v;

	i = 0;
	v = min;
	rangi = NULL;
	if (min >= max)
	{
		return (NULL);
	}
	if (!(rangi = (int*)malloc(sizeof(rangi ) * (max - min))))
		return (NULL);
	while (v < max)
	{
		rangi[i] = v;
		v++;
		i++;
	}
	return (rangi);
}
