/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:36:46 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 22:47:44 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[0])
	{
		while (tab[0][j] != '\0')
			ft_putchar(tab[0][j++]);
		ft_putchar('\n');
		tab++;
		j = 0;
	}
}
