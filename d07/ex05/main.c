void ft_print_words_tables(char **tab);

int		main()
{
char* table[] = {"asdf","qwerty","zxcv", NULL};
ft_print_words_tables(table);

char* table[] = {NULL};
ft_print_words_tables(table);
return (0);
}
