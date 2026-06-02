#include <stdio.h>
int main()
{
    int sum=0;int n,rem;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    printf("sum of digit of a number = %d ",sum);
}