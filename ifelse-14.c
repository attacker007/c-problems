#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c == 180){
        printf("vaild triangle");
    }
    else{
        printf("not vaild triangle");
    }
    return 0;
    
}