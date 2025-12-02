/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
5
45
345
2345
12345   */

#include <stdio.h>

int main() {
    int i, j, rows;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        int n = i;  // starting number for each row
        for (j = i; j <= rows; j++) {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}
