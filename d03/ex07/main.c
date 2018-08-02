/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:57:29 by hryu              #+#    #+#             */
/*   Updated: 2018/07/27 10:59:34 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/2018/h/hryu/Desktop/proto/proto.h"
#include <stdio.h>

int main ()
{
	char test1[] = "asdf";
	printf("%s\n", ft_strrev(test1));
	char test2[] = "qwert";
	printf("%s\n", ft_strrev(test2));
	char test3[] = "z";
	printf("%s\n", ft_strrev(test3));
	char test4[] = "bc";
	printf("%s\n", ft_strrev(test4));
	return (0);
}
