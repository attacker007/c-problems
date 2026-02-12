#include<stdio.h>
int main(){
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b)
    max=b;
    else if(max<c)
    max=c;
    printf("25 is largest");
    return 0;
}