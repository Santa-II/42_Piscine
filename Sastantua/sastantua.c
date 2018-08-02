/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:32:04 by hryu              #+#    #+#             */
/*   Updated: 2018/07/31 15:06:35 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LINE_NB(size) (size * (size + 5) / 2)
#define DOOR_SIZE(size) (size - ((size % 2) ? 0 : 1))

void	ft_putchar(char c);

void	ft_putnchar(char c, int n)
{
	while (n--)
		ft_putchar(c);
}

void	ft_draw_line(int line, int size, int stars, int spaces)
{
	ft_putnchar(' ', spaces);
	ft_putchar('/');
	if (line >= LINE_NB(size) - DOOR_SIZE(size))
	{
		ft_putnchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
		if (size >= 5 && line == LINE_NB(size) - DOOR_SIZE(size) / 2 - 1)
		{
			ft_putnchar('|', DOOR_SIZE(size) - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			ft_putnchar('|', DOOR_SIZE(size));
		ft_putnchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
	}
	else
		ft_putnchar('*', stars * 2 + 1);
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int		i;
	int		star_count;
	int		stage;
	int		line;
	int		stars[LINE_NB(size)];

	i = 0;
	stage = 1;
	star_count = 0;
	while (stage++ <= size)
	{
		line = 1;
		while (line++ < (stage + 2))
		{
			stars[i] = star_count;
			star_count++;
			i++;
		}
		star_count += stage / 2 + 1;
	}
	i = -1;
	while (++i < LINE_NB(size))
		ft_draw_line(i, size, stars[i], stars[LINE_NB(size) - 1] - stars[i]);
}
