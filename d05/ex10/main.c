#include <stdio.h>

void	*ft_strcapitalize(char *str);

int   main(void)
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  
  printf("\n%s", ft_strcapitalize(str));
  return (0);
}
