/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/28 10:48:04 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main()
{
	int res, exp;

printf("%d,%d,%d,%d, %d,%d,%d,%d, %d,%d,%d,%d",
	ft_fibonacci(0),
	ft_fibonacci(1),
	ft_fibonacci(2),
	ft_fibonacci(3),

	ft_fibonacci(4),
	ft_fibonacci(5),
	ft_fibonacci(6),
	ft_fibonacci(7),

	ft_fibonacci(8),
	ft_fibonacci(9),
	ft_fibonacci(10),
	ft_fibonacci(11));
	return (0);
}
