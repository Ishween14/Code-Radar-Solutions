#include <stdio.h>

int main() {
    char str1[100], str2[100];

    // Taking two space-separated strings as input
    printf("Enter two space-separated strings: ");
    scanf("%s %s", str1, str2);

    // Printing the entered strings
    printf("You entered: %s %s\n", str1, str2);

    return 0;
}