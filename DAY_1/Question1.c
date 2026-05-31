#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of n natural numbers =%d ",sum);
    return 0;


}