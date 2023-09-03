#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

int main ()
{
    char str1[] = "Hello";
    char str2[] = "yello";
    char *st1 = &str1[0];
    char *st2 = &str2[0];
    int n = 6;

    ft_strncpy(st1, st2, n);

    printf("%s",str1);

}
