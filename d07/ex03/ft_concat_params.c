/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:34:08 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 20:36:39 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += (ft_strlen(argv[i]) + 1);
		i++;
	}
	dest = (char*)malloc(sizeof(char) * len + 1);
	if (dest == '\0')
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ft_strcat(dest, argv[i++]);
		if (i != argc)
			ft_strcat(dest, "\n");
	}
	dest[len] = '\0';
	return (dest);
}
