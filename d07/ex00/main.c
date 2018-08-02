/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:57:52 by hryu              #+#    #+#             */
/*   Updated: 2018/08/02 15:02:12 by hryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

char	*ft_strdup(char *src);
				
int main()
{
char* str;
char* res;
str = "asdf", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);
str = "", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);
str = "hello world!", res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);

str = "shEnUD4mhYOEJeBBhtPjo5UDpgvRBp27UmtIJ802DGrQ^?"; res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);

str = "mBTFeYyGX5z"; res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);

str = "ItTg6Oj2ogn"; res = ft_strdup(str);
printf("%d, '%s' vs '%s'\n", res != str, res, str);

return 0;
}
