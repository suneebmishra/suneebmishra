#include<stdio.h>
int main()
{
    int a,sum=0,r;
    printf("enter a number: ");
    scanf("%d",&a);
    do
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    while(a!=0);
    printf("sum of digits is %d", sum);

    return 0;
    
}