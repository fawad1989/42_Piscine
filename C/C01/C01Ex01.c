#include<stdio.h>
#include<stdlib.h>

void ft_ultimate_ft(int *********nbr);



int main()
{
    int number = 37;
    int *nb1 = &number;
    int **nb2 = &nb1;
    int ***nb3 = &nb2;
    int ****nb4 = &nb3;
    int *****nb5 = &nb4;
    int ******nb6 = &nb5;
    int *******nb7 = &nb6;
    int ********nb8 = &nb7;
    int *********nb9 = &nb8;
    //int **nb = &nb;

    ft_ultimate_ft(nb9);
    printf("%d",*********nb9);
    printf("%d",number);
}


void ft_ultimate_ft(int *********nbr)

{
    *********nbr = 42;
}