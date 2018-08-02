/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:35:32 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 23:12:30 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define SEP(x) (x == ' ' || x == '\t' || x == '\n')

int		ft_nb_arry(char *str)
{
	int	nb_arry;
	int i;

	i = 0;
	nb_arry = 0;
	while (str[i] != '\0')
	{
		while (SEP(str[i]) && str[i] != '\0')
		{
			i++;
			if (str[i] == '\0')
				return (nb_arry);
		}
		while (!SEP(str[i]) && str[i] != '\0')
			i++;
		nb_arry++;
	}
	return (nb_arry);
}

int		ft_nb_char(char *str)
{
	int i;

	i = 0;
	while (SEP(str[i]) && str[i] != '\0')
		str++;
	while (!(SEP(str[i])) && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		nb_arry;
	int		nb_entered;
	char	**words;
	char	*word;

	i = 0;
	nb_entered = 0;
	nb_arry = ft_nb_arry(str);
	words = (char**)malloc(sizeof(char*) * (nb_arry + 1));
	while (nb_entered < nb_arry)
	{
		word = (char*)malloc(sizeof(char) * (ft_nb_char(str) + 1));
		while (SEP(str[0]) && str[0] != '\0')
			str++;
		while (!(SEP(str[0])) && str[0] != '\0')
			word[i++] = *str++;
		word[i] = '\0';
		words[nb_entered++] = word;
		i = 0;
	}
	words[nb_arry] = 0;
	return (words);
}
