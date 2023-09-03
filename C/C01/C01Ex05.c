#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void ft_putstr(char *str);



int main()
{
    char str[] = {'H','e','l','l','o',' ','F','a','w','a','d'};
    ft_putstr(str);

}


void ft_putstr(char *str)

{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}