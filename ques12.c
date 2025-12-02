// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter a value: ");

    // Try to read an integer
    if (scanf("%d", &num) == 1) {
        // Successfully read a number
        if (num > 0)
            printf("%d is positive.\n", num);
        else if (num < 0)
            printf("%d is negative.\n", num);
        else
            printf("%d is zero.\n", num);
    } 
    else {
        // scanf failed to read an integer → must be character/symbol
        scanf("%c", &ch);  // read the invalid input character
        printf("The input is not a digit but a special character.\n");
    }

    return 0;
}
