int len_str(char *str)
{
    int len = 0;
    
    while(str[len] != '\0')
        len++;
    return (len);
}



int main(int ac,char **av)
{
    int i = 0;

    if(av[1])
    {
        i = len_str(av[1]) - 1;
        
        while(i >= 0)
            write(1,&av[1][i],1);
            i--;
    }
    write(1,"\n",1);
    return (0);
}