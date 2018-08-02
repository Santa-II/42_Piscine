#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcat(test, "code", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "sofa", 6));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "ohno", 4));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "ohYA", 0));
printf("%s\n", test);
return (0);
}
