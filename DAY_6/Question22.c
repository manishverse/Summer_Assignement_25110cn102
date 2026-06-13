#include <stdio.h>
int main()
 {

    int n,d=0,p= 1,r;

    printf("Enter a binary number:");
    scanf("%d",&n);

    while (n>0) 
    {
        r =n % 10;
        d =d + r * p;
        p =p * 2;
        n = n / 10;
    }

    printf("Decimal =%d",d);
    return 0;
}