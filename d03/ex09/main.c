/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/27 12:47:44 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main()
{
	int test1[] = {1,5,4,2,3};
	int size = 5;
	ft_sort_integer_table(test1, size);
	
	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);
}
