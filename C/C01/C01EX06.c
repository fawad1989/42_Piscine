#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int ft_strlen(char *str);



int main()
{
    //char str[] = {'H','e','l','l','o',' ','F','a','w','a','d'};
    char str[] = "Hello World";
    char *st = &str[0];
    int r = ft_strlen(str);
    printf("%d",r);
}


int ft_strlen(char *str)

{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;

}