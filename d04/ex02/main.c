/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/28 09:49:10 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main()
{
	int res, exp;

	res = ft_iterative_power(2, 2), exp = 4;
	printf("2^2 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 1), exp = 2;
	printf("2^1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 0), exp = 1;
	printf("2^0 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, -1), exp = 0;
	printf("2^-1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 4), exp = 16;
	printf("2^4 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(5, 3), exp = 125;
	printf("5^3 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(3, 5), exp = 243;
	printf("3^5 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 1000000), exp = -1;
	printf("2^1000000 (%d vs %d) -> %d\n", res, exp, 1);
	return 0;
}
