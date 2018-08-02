/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/28 12:42:28 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main()
{
	int res, exp;

	res = ft_is_prime(4), exp = 0;
	printf("prime 4? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(2), exp = 1;
	printf("prime 2? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(1), exp = 0;
	printf("prime 1? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(0), exp = 0;
	printf("prime 0? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(7), exp = 1;
	printf("prime 7? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(23), exp = 1;
	printf("prime 23? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(-5), exp = 0;
	printf("prime -5? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(61), exp = 1;
	printf("prime 61? (%d vs %d) -> %d\n", res, exp, res == exp);
	return (0);
}
