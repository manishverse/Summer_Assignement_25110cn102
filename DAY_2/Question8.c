#include <stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter a number :");
    scanf("%d",&n);
    int ori=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(ori==rev)
    printf("entered number is palindrpome number");
    else
    printf("entered number is not a palindrpome number");
}