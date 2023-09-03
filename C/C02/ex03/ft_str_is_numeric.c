#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    int num_start = 48;
    int num_end = 57;
    int i = 0;
    
    while(str[i] != '\0')
    {
        if (((str[i] - num_start) *(str[i] - num_end)) <=0)
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
    char str1[] = "12345a6789";
    char *st1 = &str1[0];

    int a = ft_str_is_numeric(st1);

    printf("%d",a);

}
