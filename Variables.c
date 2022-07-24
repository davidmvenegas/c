#include <stdio.h>

int main() {

    int x;
    x = 123;
    int y = 321;

    int age = 19; // integer
    float gpa = 3.14; // floating point num
    char grade = 'C'; // Single character
    char name[] = "David"; // Array of characters

    printf("Hello %s,\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}