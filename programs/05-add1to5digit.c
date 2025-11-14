#include<stdio.h>

int main(){
    int n, newN=0;

     while (1)
    {
        printf("Enter a 5-digit integer: ");
        scanf("%d", &n);

        if (n>=1000 && n<=99999)
            break;  
        else 
            printf("Not 5 digit. Enter again.\n");
    }

    int temp = n, i=1;

    while (temp !=0)
    {
        int digit;;
        digit = i*(((temp%10)+1)%10); //add 1 to digit, last %10 make digit 10 if it becomes 10. i places it to its own digits place

        newN += digit;
        i*=10;
        temp/=10;

    }
    

    printf("New number : %05d %d", newN, 6%10);

}