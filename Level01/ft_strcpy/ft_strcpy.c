#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i]='\0';
    return (s1);
}

int		main(void)
{
	char s1[50] = "stringone";  // Yeterli boyutta bir dizi oluşturduk

	ft_strcpy(s1, "stringtwo");
	printf("Sonuc: %s\n", s1);  // Sonucu konsola yazdır
	return (0);
}