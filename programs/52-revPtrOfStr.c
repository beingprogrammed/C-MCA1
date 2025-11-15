#include <stdio.h>
#include <string.h>

int main() {
    char *s[] = { 
        "To err is human...", 
        "But to really mess things up...", 
        "One needs to know C!!" 
    };
    
    int n = sizeof(s) / sizeof(s[0]);  // number of strings
    char temp[200];  // buffer to store reversed string

    for (int i = 0; i < n; i++) {
        int len = strlen(s[i]);

        // Reverse the string into temp
        for (int j = 0; j < len; j++) {
            temp[j] = s[i][len - j - 1];
        }
        temp[len] = '\0';  // null-terminate the string

        printf("Original: %s\n", s[i]);
        printf("Reversed: %s\n\n", temp);
    }

    return 0;
}
