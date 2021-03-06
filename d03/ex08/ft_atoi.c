/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:56:41 by hryu              #+#    #+#             */
/*   Updated: 2018/07/27 12:37:09 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int count;

	i = 0;
	sign = 1;
	count = 0;
	if (str[0] == '-')
	{
		sign = -1;
		count++;
	}
	while (str[count])
	{
		i = i * 10 + str[count] - '0';
		count++;
	}
	return (sign * i);
}
