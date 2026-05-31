#include <stdio.h>
int main()
{
    int n,product=1;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n<0)
    printf("factorial of a number does not exist ");
    else
    {
    for(int i=1;i<=n;i++)
    {
        product=product*i;
        
    }
    printf("factorial of a number %d = %d ",n,product);
     }
     
    return 0;
}