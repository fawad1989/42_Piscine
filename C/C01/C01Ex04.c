#include<stdio.h>
#include<stdlib.h>

void ft_ultimate_div_mod(int *a, int *b);



int main()
{
    int number1 = 10;
    int number2 = 2;

    int *a = &number1;
    int *b = &number2;
 

    ft_ultimate_div_mod(a, b);
    printf("nb1 = %d",*a);
    printf("nb2 = %d",*b);
}


void ft_ultimate_div_mod(int *a, int *b)

{
    
    int div = *a/(*b);
    int mod = *a % (*b);
    
    *a = div;
    *b = mod;
}