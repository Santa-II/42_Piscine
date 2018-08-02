/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 01:51:08 by ale-goff          #+#    #+#             */
/*   Updated: 2018/07/28 09:21:09 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i[2];
	int c;

	c = 0;
	while (c < 2)
		i[c++] = 0;
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
					ft_putchar('C') : ft_putchar('A');
			else
				(i[0] == 0 || i[0] == y - 1 || i[1] == x - 1) ?
					ft_putchar('B') : ft_putchar(' ');
		ft_putchar('\n');
		i[1] = 0;
		i[0]++;
	}
}
