void	ft_print_numbers(void)
{
    char x;

    x='a';
    while( x <= '9')
    {
        write(1, &x, 1);
    }
}
