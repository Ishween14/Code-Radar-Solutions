#include <stdio.h>

int main() {
    char str[100]; // Allocate memory for the string
    printf("Enter a string: ");
    scanf("%99s", str); // Read a single word (up to 99 characters)
    printf("You entered: %s\n", str);
    return 0;
}
