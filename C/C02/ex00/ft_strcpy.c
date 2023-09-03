#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] /*!= "\0"*/)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i]; // to add the ending char "\0"

    return (dest);
}

int main ()
{
    char str1[] = "Hello";
    char str2[] = "yello";
    char *st1 = &str1[0];
    char *st2 = &str2[0];


    ft_strcpy(st1,st2);

    printf("%s",str1);

}
