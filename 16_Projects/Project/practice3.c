#include <stdio.h>

// Function to count the number of words
int countWords(char *str) {
    int count = 0;
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
            count++;
        }
        i++;
    }
    return count;
}

// Function to get starting index of the middle word
int getMiddleWordStart(char str[]) {
    int total = countWords(str);
    int middle = (total / 2) + 1;

    int wordCount = 0;
    int i = 0;

    while(str[i] != '\0') {
        if(str[i] != ' ' && (i == 0)) {
            wordCount++;
            if(wordCount == middle) {
                return i;
            }
        }
        i++;
    }
    return -1;
}

// Check if the word is a Dragon word
int isDragon(char str[]) {
    int start = getMiddleWordStart(str);
    if(start == -1) return 0;

    // Check if it starts with ?
    if(str[start] != '?') return 0;
    start++;

    // Now check the letters between ? and #
    while(str[start] != '\0' && str[start] != '#') {
        if(!((str[start] >= 'A' && str[start] <= 'Z') || (str[start] >= 'a' && str[start] <= 'z'))) {
            return 0;
        }
        start++;
    }

    // Check if it ends with #
    if(str[start] != '#') return 0;

    // Passed all checks
    return 1;
}

int main() {
    char str[200];

    // Take input
    gets(str);  // beginner-friendly but not safe in real life

    if(isDragon(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
