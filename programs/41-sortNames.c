#include <stdio.h>
#include <string.h>

int main() {
    int n = 15;

    char names[15][50] = {
        "Ghanshyam", "Naveen", "Amit Sharma", "Riya Verma", "Suresh",
        "Meera", "Arjun Singh", "Lakshmi Iyer", "Vikram", "Pooja Patel",
        "Rohan", "Anjali Mehta", "Karan", "Deepak Kumar", "Sneha"
    };

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }

    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
