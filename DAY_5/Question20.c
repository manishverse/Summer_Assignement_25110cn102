#include <stdio.h>
int main()
{
    int n,l=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            l= i;
            n=n/i;
        
        }
    }
    
     printf("largest prime factor = %d",l);

    
     return 0;
}