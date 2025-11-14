#include <stdio.h>
#include <string.h>

int main() {
    char str[200], abbrev[200];
    int i = 0, j = 0, lastWordStart = 0;

    printf("Enter full name: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // remove newline

    // remove trailing spaces
    int len = strlen(str);
    while (len > 0 && str[len - 1] == ' ')
        str[--len] = '\0';

    // find where the last word begins
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            lastWordStart = i + 1;
            break;
        }
    }

    // abbreviate all words before last word
    for (i = 0; i < lastWordStart; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            abbrev[j++] = str[i];
            abbrev[j++] = '.';
            abbrev[j++] = ' ';
        }
    }

    // copy the last word fully
    i = lastWordStart;
    while (str[i] != '\0') {
        abbrev[j++] = str[i++];
    }

    abbrev[j] = '\0';

    printf("Abbreviated Name: %s\n", abbrev);

    return 0;
}
