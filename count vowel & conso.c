#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = toupper(ch); // Convert to uppercase to handle both cases
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[] = "Hello, World!"; 
    int vowels = 0, consonants = 0;
    int i = 0;
    while (str[i] != '\0') {
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            
            if (isVowel(str[i])) {
                vowels++;
            }
            
            else {
                consonants++;
            }
        }
        i++;
    }

   
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

