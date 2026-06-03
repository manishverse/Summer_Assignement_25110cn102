#include <stdio.h>
int main()
{
    int count=2,n;
    printf("enter a number you want to check :");
    scanf("%d",&n);
    if(n==1)
    printf("entered number %d is not a prime number",n); 
    else
    {
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("entered number %d is prime number",n);
    else
    printf("entered number %d is not a prime number",n);
}
return 0;
}