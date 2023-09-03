#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
    int sma_let_start = 97;
    int sma_let_end = 122;
    int i = 0;
    
    while(str[i] != '\0')
    {
        if (((str[i] - sma_let_start) *(str[i] - sma_let_end) <=0))
        {
            i++;
        }
        else 
        {
            str[i] += 32;
            i++;
        }
        
    }
}

int main ()
{
    char str1[] = "hellllo";
    char *st1 = &str1[0];
    ft_strupcase(st1);
    printf("%s",st1);

}
