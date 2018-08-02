/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 22:42:39 by hryu              #+#    #+#             */
/*   Updated: 2018/07/31 19:45:34 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (size != 0)
	{
		while (i < (size - 1))
		{
			if (src[i] == '\0')
				dest[i] = '\0';
			dest[i] = src[i];
			i++;
		}
		while (dest[i] != '\0')
			dest[i] = '\0';
	}
	return (ft_strlen(src));
}
