/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 09:35:36 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 17:24:09 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
				|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
			i++;
		if (str[i] == '-' || str[i] == '+')
			if (str[i++] == '-')
				sign = 1;
		if (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10;
			nb += (int)str[i++] - '0';
		}
		if (sign == 1)
			return (-nb);
		else
			return (nb);
	}
	return (nb * sign);
}

int		main(int argc, char **argv)
{
	ft_atoi(argv[1]);
	return (0);
}
