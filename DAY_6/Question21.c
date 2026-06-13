#include <stdio.h>

int main() {
    int n,b =0,p =1;

    printf("Enter a decimal number:");
    scanf("%d", &n);

    while (n > 0) {
        b =b + (n % 2) * p;
        n =n/2;
        p= p*10;
    }

    printf("Binary =%d",b);


    return 0;
}