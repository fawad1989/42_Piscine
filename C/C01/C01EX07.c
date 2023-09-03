#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int a[] = {1,2,3,4,5};
    int *ptr = &a[0];
    int length = 5;
    ft_rev_int_tab(a, length);

    for(int i = 0; i<length; i++)
    {
        printf("%d",a[i]);
    }

}

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;

    while(i < size/2)
    {
        temp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = temp;
        i++;
    }
}