int main(int ac,char **av)
{
    if(ac == 2)
    {
        while(*av[1] && (*av[1] == ' ' || *av[1] == '\t')) //Basindaki boslugu atla
        {
            ++av[1];
        }
        while(*av[1] != '\0' && (*av[1] != ' ' || *av[1] != '\t'))
            write(1, av[1]++, 1);
    }
    write(1, "\n", 1);
    return (0);
}