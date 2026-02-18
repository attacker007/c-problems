#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int decimal=0,digit,base=1;
    for(;n!=0;n/=10){
        digit=n%10;
        decimal=decimal+digit*base;
        base=base*2;
    }
    printf("%d",decimal);
    return 0;
}
