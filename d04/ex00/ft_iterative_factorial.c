/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:54:44 by hryu              #+#    #+#             */
/*   Updated: 2018/07/28 22:13:30 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb >= 13)
		return (0);
	factorial = 1;
	while (i++ < nb)
		factorial = factorial * i;
	return (factorial);
}
