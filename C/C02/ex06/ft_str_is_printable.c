#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    int printable_start = 32;
    int printable_end = 126;
    int i = 0;
    
    while(str[i] != '\0')
    {
        if (((str[i] - printable_start) *(str[i] - printable_end) <=0))
        {
            i++;
        }
        else 
        {
            return 0;
        }
        
    }
    return 1;
}

int main ()
{
    char str1[] = "Hel7lo";
    char *st1 = &str1[0];

    int a = ft_str_is_lowercase(st1);

    printf("%d",a);

}
