/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:35:59 by hryu              #+#    #+#             */
/*   Updated: 2018/07/26 14:35:30 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char comb2[2];

	while (!(comb2[1] == 99 && comb2[0] == 98))
	{
		comb2[1]++;
		if (comb2[1] > 99)
		{
			comb2[0]++;
			comb2[1] = 0;
		}
		if (comb2[0] < comb2[1])
		{
			ft_putchar(comb2[0] / 10 + '0');
			ft_putchar(comb2[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(comb2[1] / 10 + '0');
			ft_putchar(comb2[1] % 10 + '0');
			if (!(comb2[1] == 99 && comb2[0] == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
