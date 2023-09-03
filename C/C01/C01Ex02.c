#include<stdio.h>
#include<stdlib.h>

void ft_swap(int *a, int *b);

int main()
{
    int number1 = 37;
    int number2 = 42;
    int *nb1 = &number1;
    int *nb2 = &number2;
 

    ft_swap(nb1, nb2);
    printf("nb1 = %d",*nb1);
    printf("nb2 = %d",*nb2);
}


void ft_swap(int *a, int *b)

{
    int y = *a;
    int z = *b;
    
    *a = z;
    *b = y;
}