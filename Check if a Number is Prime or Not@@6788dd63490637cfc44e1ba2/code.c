#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);

    if (a < 2) {
        printf("Not Prime\n");
    } else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                printf("Not Prime\n");
                return 0;  
            }
        }
        printf("Prime\n");
    }
    
    return 0;
}