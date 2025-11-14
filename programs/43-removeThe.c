#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newstr[100];
    int i = 0, j = 0;

    printf("Enter a string: ");

    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    while (str[i] != '\0') {

        // Check for "the" or "The" or "THE"
        if ((str[i]=='t' || str[i]=='T') &&
            str[i+1]=='h' &&
            str[i+2]=='e' &&
            (str[i+3]==' ' || str[i+3]=='\0' || str[i+3]=='\n'))
        {
            i += 3;  // skip "the"

            // also skip the space after "the", if any
            if (str[i] == ' ') i++;

        } else {
            newstr[j] = str[i];
            i++;
            j++;
        }
    }

    newstr[j] = '\0';

    printf("String after removing 'the': %s\n", newstr);

    return 0;
}
