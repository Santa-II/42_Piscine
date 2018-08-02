/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 12:40:23 by hryu              #+#    #+#             */
/*   Updated: 2018/08/02 15:26:53 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*r;
	int					i;
	int					j;

	i = 0;
	j = -1;
	if (!(r = malloc(sizeof(*r) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		r[i].size_param = 0;
		while (av[i][r[i].size_param])
			r[i].size_param++;
		r[i].str = av[i];
		if (!(r[i].copy = malloc(r[i].size_param + 1)))
			return (NULL);
		while (++j < r[i].size_param + 1)
			r[i].copy[j] = av[i][j];
		r[i].tab = ft_split_whitespaces(av[i]);
		i++;
		j = -1;
	}
	r[ac].str = 0;
	return (r);
}
