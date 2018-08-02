/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 02:24:53 by viwade            #+#    #+#             */
/*   Updated: 2018/07/28 05:12:20 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i[2];
	int z;

	z = 0;
	while (z < 2)
		i[z++] = 0;
	while (i[0] < y)
	{
		if (i[0] == 0 || i[0] == y - 1)
			(i[0] == 0) ?
				ft_putchar('A') : ft_putchar('C');
		else
			ft_putchar('B');
		while (++i[1] < x)
			if (i[1] == x - 1 && (i[0] == 0 || i[0] == y - 1))
				(i[0] == 0) ?
					ft_putchar('A') : ft_putchar('C');
			else
				(i[0] == 0 || i[0] == y - 1 || i[1] == x - 1) ?
					ft_putchar('B') : ft_putchar(' ');
		ft_putchar('\n');
		i[1] = 0;
		i[0]++;
	}
}
