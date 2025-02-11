#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a','e','i','o','u'){
        printf("Vowel");
    }
    else if((a>=0)%%(a<=9)){
        printf("Digit");
    }
}