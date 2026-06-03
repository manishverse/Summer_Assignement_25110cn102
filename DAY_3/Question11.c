#include <stdio.h>
int main()
{
    int num1,num2,GCD;
    printf("enter two number to check their GCD :");
    scanf("%d%d",&num1,&num2);
    for(int i=1; i<=num1&&i<=num2 ;i++)
    {
        if(num1 % i==0 && num2 % i==0)
        GCD=i;
    }
    printf("GCD of %d and %d = %d ",num1,num2,GCD);
    return 0;
}