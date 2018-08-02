/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 12:04:27 by hryu              #+#    #+#             */
/*   Updated: 2018/08/01 23:25:02 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i[2];
	char	*temp;

	i[0] = 1;
	i[1] = argc;
	while (i[1]-- - 1 > 0)
	{
		while (argv[i[0] + 1])
		{
			if (ft_strcmp(argv[i[0]], argv[i[0] + 1]) > 0)
			{
				temp = argv[i[0]];
				argv[i[0]] = argv[i[0] + 1];
				argv[i[0] + 1] = temp;
			}
			i[0]++;
		}
		i[0] = 1;
	}
	while (argc-- - 1 > 0)
	{
		ft_putstr(argv[i[0]++]);
		ft_putchar('\n');
	}
	return (0);
}
