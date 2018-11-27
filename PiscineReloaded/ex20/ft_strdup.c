/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 20:25:34 by hchretie     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 17:34:17 by hchretie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = NULL;
	while (src[i] != '\0')
	{
		i++;
	}
	if (src != NULL)
	{
		dest = (char*)malloc((i + 1) * sizeof(*dest));
		if (dest != NULL)
		{
			i = 0;
			while (src[i] != '\0')
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (dest);
}
