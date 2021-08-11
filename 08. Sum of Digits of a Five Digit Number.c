#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int sum=0,rem;
    scanf("%d", &n);
    while(n !=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}
