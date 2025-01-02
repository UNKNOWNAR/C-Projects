#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d",&num);
    int temp = num;
    do
    {
        int temp1 = 0;
        while(temp!=0)
        {
            temp1+= pow(temp%10,2);
            temp/=10;
        }
        temp = temp1;
        if(temp<10)
            break;
    }while(temp!=1);
    if(temp==1)
        printf("%d is a Happy Number",num);
    else
        printf("%d is not a Happy Number",num);
    return 0;
}