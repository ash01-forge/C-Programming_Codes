#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  // Array to store the frequency of characters
    int maxCount = 0;
    char maxChar;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Find the character with the maximum frequency
    for (int i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i;
        }
    }

    // Print the result
    printf("The maximum occurring character is: %c\n", maxChar);

    return 0;
}
