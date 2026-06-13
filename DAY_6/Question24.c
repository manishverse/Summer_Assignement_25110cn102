#include <stdio.h>

int main()
 {
    int x, n,i,r =1;

    printf("Enter x and n: ");
    scanf("%d%d",&x,&n);

    for (i = 1; i<=n; i++) 
    {
        r = r*x;
    }

    printf("Answer = %d",r);

    return 0;
}