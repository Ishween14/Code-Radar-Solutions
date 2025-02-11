#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(((a>='A')&&(a<='Z'))||((a>='a')&&(a<='z'))){
        if((a=='a','e','i','o','u')||(a=='A','E','I','O','U')){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }
    else if((a>=0)&&(a<=9)){
        printf("Digit");
    }else{
        printf("Special Character");
    }return 0;
}