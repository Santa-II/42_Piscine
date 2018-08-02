/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/28 10:58:40 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main()
{
	int res, exp;

res = ft_sqrt(4), exp = 2;
printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1), exp = 1;
printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(0), exp = 0;
printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(3), exp = 0;
printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(9), exp = 3;
printf("root 9 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(16), exp = 4;
printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-5), exp = 0;
printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(144), exp = 12;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
return (0);
}
