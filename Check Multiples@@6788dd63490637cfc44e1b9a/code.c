#include<stdio.h>
int main(){
    int mul,div;
    scanf("%d %d",&mul,&div);
    if(mul%div==0){
        printf("Yes");
    }else{
        printf("No");
    }return 0;
}