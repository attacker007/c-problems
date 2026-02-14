#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int frist=0;
    int second=1;
    if(1>=0){
        printf("%d",frist);
        
    }
    if(2>=0){
        printf("%d",second);
        
    }
    for(int i=2;i < n;i++){
        int temp = frist + second;
        frist = second;
        second = temp;
        
        printf(" %d ",temp);
    }
    return 0;
}

