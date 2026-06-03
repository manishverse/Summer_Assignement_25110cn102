#include <stdio.h>
int main()
{
    int count=2,n;
    printf("enter a range from 1 to any number of your wish :");
    scanf("%d",&n);
    if(n==1)
    printf("no number in this range "); 
    else
    {
    for(int i=2;i<=n;i++)
    {
        int p=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0){
            p=0;
            break;}
            
        }  
        if(p==1)
        printf("%d \t",i);
    }   
}
return 0;
}