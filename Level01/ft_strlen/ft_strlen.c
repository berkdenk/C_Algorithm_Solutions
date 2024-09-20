#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int	main(void)
{
    char str[50] = "stringone";
    int length;

    length = ft_strlen(str);

    printf("Stringin uzunlugu: %d\n", length);
    return (0);
}