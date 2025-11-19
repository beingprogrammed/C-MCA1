//WAP to fill the entire screen with a smiling face. the smiling face has an ASCII value 1.
#include <stdio.h>
int main() {

    //i am on arch, this doesnt use cp437 encoding, so smiling face may not appear correctly.

    //we need a terminal that uses CP437 encoding (like old DOS terminals) to see the smiling face character.

    //maybe will work on windows cmd or powershell
    int i;
    for (i = 0; i < 100000; i++) { // Assuming 25 rows
            printf("%c", 1); // Print smiling face character
        }
        printf("\n"); // New line after each row
    return 0;
}