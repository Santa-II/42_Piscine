/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:32:15 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 16:52:37 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
