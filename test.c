#include <stdio.h>
int main()
{
    int a = 9;
    a = (a==9?printf("%d",a):printf("%d321",a));
    printf("%d",a);
}