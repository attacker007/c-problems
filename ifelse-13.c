#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=97){
        printf("upper case letter");
        
    }
    else{
        printf("lower case");
    }
    return 0;
    
}