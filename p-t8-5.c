// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a;
    printf("%d %d",(a/=b),(c%=b));

    return 0;
}