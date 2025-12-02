/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*      */

#include <stdio.h>

int main() {
    int i, j, rows;

    // Input number of rows 
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    // Top half (increasing stars)
    for (i = 1; i <= rows; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (decreasing stars)
    for (i = rows - 2; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
