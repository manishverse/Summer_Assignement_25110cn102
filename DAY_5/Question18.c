#include <stdio.h>
int main()
{
    int n,sum=0,rem,temp,f;
    printf("enter a number :");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        rem=temp%10;
        f=1;
        for( int i=1; i<=rem ;i++)
        {
        f=f*i;
        }
        sum=sum+f;
        temp= temp/10;
    }
    if(sum==n)
     printf("%d is a strong number .",n);

     else
     printf("%d is not a strong number .",n);
     
     return 0;
}