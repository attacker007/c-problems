#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    switch (c){
        case 1:
        printf("sum=%d",a+b);
        break;
        case 2:
        printf("sum=%d",a-b);
        break;
        case 3:
        printf("sum=%d",a*b);
        break;
        case 4:
        printf("sum=%d",a%b);
        break;
        default: 
        printf("not another value");
    }
    return 0;
    
}
