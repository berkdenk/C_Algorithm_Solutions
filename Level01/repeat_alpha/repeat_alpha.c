int letter_count(char c)
{
    int repeat;

    if(c >= 'a' && c <= 'z')
        repeat = c - 'A' + 1;
    else if (c >= 'A' && c <= 'Z')
        repeat = c - 'a' + 1;
    else
        repeat = 1;
    return (repeat);
}

int main(int ac,char **av)
{
    int repeat;
    int i = 0;

    if(ac == 2)
    {
        while(av[1][i])
        {
            repeat=(letter_count(av[1][i]));
            while(repeat--)
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}