/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 00:06:02 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 10:49:38 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i[7];
	int c;

	c = 0;
	while (c < 7)
		i[c++] = 0;
	while (i[0] < y)
	{
		if (i[0] == 0 || i[0] == y - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		while (i[1]++ < x - 2)
			if (i[0] == 0 || i[0] == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		if (x != 1)
			(i[0] == 0 || i[0] == y - 1) ?
				ft_putchar('C') : ft_putchar('B');
		ft_putchar('\n');
		i[0]++;
		i[1] = 0;
	}
}
