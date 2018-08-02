/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 19:45:30 by hryu              #+#    #+#             */
/*   Updated: 2018/07/26 22:39:35 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int comb[3];

	while (comb[0] <= 7)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 8)
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= 9)
			{
				ft_putchar(comb[0] + '0');
				ft_putchar(comb[1] + '0');
				ft_putchar(comb[2] + '0');
				if (!(comb[0] == 7 && comb[1] == 8 && comb[2] == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
