//WAP to fill the entire screen with a smiling face. the smiling face has an ASCII value 1.
#include <stdio.h>
int main() {

    //this is a modern gcc compiler so printing ASCII value 1 may not show a smiling face at it uses utf-8 encoding, in which ASCII value 1 is a control character, which is not printable, and that character is used for "Start of Heading" in text communication.
    //but in older compilers like turbo C it shows a smiling face.

    int i, j;
    for (i = 0; i < 25; i++) { // Assuming 25 rows
        for (j = 0; j < 80; j++) { // Assuming 80 columns
            printf("%c", 1); // Print smiling face character
        }
        printf("\n"); // New line after each row
    }
    return 0;
}