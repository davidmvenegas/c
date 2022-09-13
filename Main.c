#include <stdio.h>

int main() {
    // printf("\nHello world");

    char grade;

    printf("\nEnter your letter grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("\nExcelent");
            break;
        case 'B':
            printf("\nDo better");
            break;
        case 'C':
            printf("\nnah dog");
            break;
        case 'D':
            printf("\nerg...");
            break;
        case 'F':
            printf("\nBro wtf");
            break;
        default:
            break;
    }
}