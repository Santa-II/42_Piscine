/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 02:24:53 by viwade            #+#    #+#             */
/*   Updated: 2018/07/28 04:57:38 by viwade           ###   ########.fr       */
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
		(i[0] == 0 || i[0] == y - 1) ?
			ft_putchar('o') : ft_putchar('|');
		while (++i[1] < x)
			if (i[1] == x - 1)
				(i[0] == 0 || i[0] == y - 1) ?
					ft_putchar('o') : ft_putchar('|');
			else
				(i[0] == 0 || i[0] == y - 1) ?
					ft_putchar('-') : ft_putchar(' ');
		ft_putchar('\n');
		i[1] = 0;
		i[0]++;
	}
}
