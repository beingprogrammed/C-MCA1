#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for malloc


int main() {
    char *str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };

    int n = sizeof(str) / sizeof(str[0]);

    char str1[30], str2[30];
    char temp[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (int i = 0; i < n; i++) {

        strcpy(temp, str[i]);  // Copy literal into writable buffer

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        for (int j = 0; j < strlen(temp); j++) {

            // Check if str1 matches at position j
            if (strncmp(&temp[j], str1, len1) == 0) {

                char after[50];
                strcpy(after, temp + j + len1);  // part after match

                temp[j] = '\0';                  // cut string at match
                strcat(temp, str2);              // insert replacement
                strcat(temp, after);             // append remainder
            }
        }

        // NOW: allocate memory for modified string
        str[i] = malloc(strlen(temp) + 1);
        /*dekho bhai, ye hai 1 string literal, literal mtln jinki value hmm sidhe hi assign krr dete hain, ye variable hai hi nhi, ye sidhe hi pointer se memory me jaa rha hai, mtlb simply literal ek read only constand value hoti hai, mtlb aisa smjh lo ki ye store hota hai ROM me or directly changagle nhi hota
        To isko change kaise krenge, temporary buffer se, vo kya hai, bus 1 array hai jo temporarily uski value ko hold krega or vahan hmm usko change krr skte hain
        Q. Kyu hm sidhe hi change kyu nhi krr skte, kyuki vo rom me hai, are jb change krenge string to uski length change bhi ho skri hai naa, to fir sidhe allocate change krne ki koshish krne lge to sidhe hi segmentation fault aa jayega
        To kya kre, dynamically memory allocate krenge, jo updated string ki length hogi utni. Fir usko ith index me daal denge*/
        strcpy(str[i], temp);
    }

    printf("\nModified strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
