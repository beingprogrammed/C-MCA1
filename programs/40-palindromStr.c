#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, len;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    // find length
    len = strlen(str);

    // remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    j = len - 1;

    // check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
