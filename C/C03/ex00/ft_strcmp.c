#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s1[i] & s1[i])
        {
            i++;
        }
        else
        {
            return (s1[i]-s2[i]);
        }
    }
    return (1);
}

int main ()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char *st1 = &str1[0];
    char *st2 = &str2[0];
    //int n = 6;

    int a  = ft_strcmp(st1, st2);

    printf("%d",a);

}
