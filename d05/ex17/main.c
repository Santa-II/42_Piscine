#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
printf("%s\n", ft_strncat(test, "asdf", 16));
printf("%s\n", ft_strncat(test, "", 16));
printf("%s\n", ft_strncat(test, "qwerty", 0));
printf("%s\n", ft_strncat(test, "asdf", 3));
return (0);
}
