#include <stdio.h>
int main()
{
    int n,temp,rem,sum = 0,s,e;
    printf("Enter a starting number: ");
    scanf("%d", &s);
    printf("Enter a ending number: ");
    scanf("%d", &e);
    for(n=s;n<=e;n++)
    {
        temp=n;
        sum=0;
    while(temp > 0)
    {
        rem= temp % 10;
        sum =sum +(rem*rem*rem);
        temp= temp /10;
    }

    if(sum==n)
        printf("%d ",n);
    }
    return 0;
}