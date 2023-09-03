#include<stdio.h>
#include<stdlib.h>

void ft_ft(int *nbr);


int main()
{
    /* Test Code*/
    int number = 37;
    int *nb = &number;

    ft_ft(nb);
    printf("%d",*nb);
    printf("%d",number);
    /* Test Code*/
}


void ft_ft(int *nbr)
{
    *nbr = 42;
}