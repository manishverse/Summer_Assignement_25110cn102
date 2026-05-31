#include <stdio.h>
int main()
{
    int n,product;
    printf("enter a table number : ");
    scanf("%d",&n);
    printf("table of a number :%d\n",n);
    for(int i=1;i<=10;i++)
    {
        product=i*n;
        printf("%d * %d = %d \n",n,i,product);
    }
    return 0;
}