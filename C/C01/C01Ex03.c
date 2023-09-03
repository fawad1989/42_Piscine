#include<stdio.h>
#include<stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod);



int main()
{
    int number1 = 10;
    int number2 = 2;
    int div = 0;
    int mod = 0;
    int *nb1 = &div;
    int *nb2 = &mod;
 

    ft_div_mod(number1, number2, nb1,nb2);
    printf("nb1 = %d",*nb1);
    printf("nb2 = %d",*nb2);
}


void ft_div_mod(int a, int b, int *div, int *mod)

{
    *div = a/b;
    *mod = a%b;
}